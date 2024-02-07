#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char temps[20];

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* timeConversion(char* s) {





    if( s[strlen(s)-2] == 'P' ||  s[strlen(s)-2] == 'p' ){

        if (s[1] == '2' && s[0] == '1' ){

            temps[0] = '1';
            temps[1] = '2';
        }

         if (s[1] == '7'){

            temps[0] = '1';
            temps[1] = '9';
        }

         if (s[1] == '8'){

            temps[0] = '2';
            temps[1] = '0';
        }

         if (s[1] == '9'){

            temps[0] = '1';
            temps[1] = '2';
        }

         if (s[1] == '0' && s[0] == '1'){

            temps[0] = '2';
            temps[1] = '2';
        }

         if (s[1] == '1' && s[0] == '1'){

            temps[0] = '2';
            temps[1] = '3';
        }

         if (s[1] == '1'){

            temps[0] = '1';
            temps[1] = '3';
        }

         if (s[1] == '2'){

            temps[0] = '1';
            temps[1] = '4';
        }

         if (s[1] == '3'){

            temps[0] = '1';
            temps[1] = '5';
        }

         if (s[1] == '4'){

            temps[0] = '1';
            temps[1] = '6';
        }

         if (s[1] == '5'){

            temps[0] = '1';
            temps[1] = '7';
        }

         if (s[1] == '6'){

            temps[0] = '1';
            temps[1] = '8';
        }



        for (int i = 2; i < strlen(s)-2; i++ ){
            temps[i] = s[i];

        }


    }



    if( s[strlen(s)-2] == 'A' || s[strlen(s)-2] == 'a'  ){

        if (s[1] == '2' && s[0] == '1' && (s[3] != '0' || s[4] != '0') ){

            temps[0] = '0';
            temps[1] = '0';
        }

        if ((s[1] == '2' && s[0] == '1') || (s[3] != '0' || s[4] != '0') ){

            temps[0] = '0';
            temps[1] = '0';
        }

         if (s[1] == '3' && s[0] == '1' ){

            temps[0] = '0';
            temps[1] = '1';
        }

         if (s[1] == '4' && s[0] == '1' ){

            temps[0] = '0';
            temps[1] = '2';
        }

         if (s[1] == '5' && s[0] == '1' ){

            temps[0] = '0';
            temps[1] = '3';
        }

         if (s[1] == '6' && s[0] == '1' ){

            temps[0] = '0';
            temps[1] = '4';
        }

         if (s[1] == '7' && s[0] == '1' ){

            temps[0] = '0';
            temps[1] = '5';
        }

         if (s[1] == '8' && s[0] == '1' ){

            temps[0] = '0';
            temps[1] = '6';
        }

         if (s[1] == '9' && s[0] == '1' ){

            temps[0] = '0';
            temps[1] = '7';
        }

         if (s[1] == '0' && s[0] == '2' ){

            temps[0] = '0';
            temps[1] = '8';
        }

            if (s[1] == '1' && s[0] == '2' ){

            temps[0] = '0';
            temps[1] = '9';
        }

            if (s[1] == '2' && s[0] == '2' ){

            temps[0] = '1';
            temps[1] = '0';
        }

                if (s[1] == '3' && s[0] == '2' ){

            temps[0] = '1';
            temps[1] = '1';
        }





        for (int i = 2; i < strlen(s)-2; i++ ){
            temps[i] = s[i];

        }


    }








     return (temps);
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = timeConversion(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}
