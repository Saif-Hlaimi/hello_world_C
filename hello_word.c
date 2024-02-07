#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
char ch[20] = "hello word";
char* ptr = &ch;

printf("addres without pointer %p",&ch);
printf("\n");
printf("addres with pointer %p", ptr);
printf("\n");
printf("value of ch with pointer : ");
 while(*ptr != '\0'){
    printf("%c",*ptr);
    ptr++;
 }
 printf("\n");

  return 0;
}
