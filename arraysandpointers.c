#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main (){

    short tab[5];
    firstfunc();
    for (int i = 0; i<5 ; i++)
    {
        printf (" donner element %d ",i);
        scanf  ("%hd",&(*(tab+i)));
    }
    display(tab);
    printf("%s",myName());


return 0;
}
const int s = 33;

firstfunc (){
printf (" this is the first function <3");
}

char* myName() {
  return "Flavio";
}

void display(short x[5]){
for (int i ; i<5;i++){
 printf(" %hd ",x[i]);
}
}
