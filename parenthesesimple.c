#include<stdio.h>
#include<string.h>
int main (){

    char ch[200];
    int count = 0;

   printf(" ch  = ? ");
   fgets(ch,200,stdin);
  

   for (int i = 0; i < strlen(ch) ; i++){

    if ( ch[i] == '(' ) {
        count++;
    } else { if (ch[i] == ')') {
        count--;
    }
}
   }
   if (count == 0) { printf("l'expression est bien parenthese"); }
    else { printf("l'expression n'est bien parenthése") ;}

    return 0;
}