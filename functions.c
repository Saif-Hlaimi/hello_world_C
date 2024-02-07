#include <stdio.h>
#include<stdlib.h>

int somme (int a , int b){
    return a + b;
}

void remplir (int tab[]){
  for (int i = 0; i<5 ; i ++ ){
    printf(" donner element %d : ",i) ;
    scanf("%d",&(*(tab+i)));
  }
}

void afficher (int tab[]){
  for (int i = 0 ; i<5 ; i++) {
  printf("%d | ",*(tab+i));
 }
}


char* display();

int main (){

    int tab[5];
    remplir(tab);
    printf("| ");
    afficher(tab);
    printf(" \nsomme de 5 + 7 est : %d \n",somme(5,6));
    printf("%s", display());

    return 0;
}

char* display (){
  return "hello word";
}