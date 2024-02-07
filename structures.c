#include <stdio.h>
#include <string.h>

struct eleve {
char nom_prenom[30];
int id;
float moy[3];
};


int main(){

    struct eleve e;

    strcpy (e.nom_prenom , "saif hlaimi");
    e.id = 33;
    for( int i=0 ;i<3;++i){
        printf("ecrir la node num % i ",i);
        scanf("%f",&e.moy[i]);
    }

    printf(" nom d\'eleve est : %s \n" , e.nom_prenom);
    printf("identifiant : %d \n", e.id);
    for (int i = 0; i<3 ; i++){
        printf(" note %d est : %.2f\n",i,e.moy[i] );
    }

    return 0;
}