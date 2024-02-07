#include <stdio.h>

  struct eleve {
     char name[12];
     int num ;
     struct resultat
     {
         int moy;
         char admis[6];
     } res ;
     
} tab[44];


int main ()
{      

       
      
      for (int i = 0 ;i <2 ; i++){
        printf(" Saisir d\'eleve numero %d ", i+1 );
        printf("\n nom : ");
        scanf("%s",&tab[i].name);
           
        printf("\n num : ");
        scanf("%d",&tab[i].num);

        printf("\n moyenne : ");
        scanf("%d",&tab[i].res.moy);

        printf("\n admis : ");
        scanf("%s",&tab[i].res.admis);
      }

      for (int i = 0; i < 2; i++)
      {
        printf(" \n \tLes donnees de eleve numero %d", i+1);
        printf ("\n Nom: %s \t Numero:%d \t Moyenne %d \t Resultat %s", tab[i].name,tab[i].num,tab[i].res.moy,tab[i].res.admis );
      }
      


    return 0;
}