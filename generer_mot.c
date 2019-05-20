#include <stdio.h>
#include <stdlib.h>

#include "prototype.h"

void renvoyer_mot()
{
    FILE* fichier = NULL;
    int ligne = 2;
    int i = 1;
    char mot1[] = "";
    char mot2[] = "";
    char mot3[] = "";

    fichier = fopen("test.txt", "r");

  if (fichier != NULL)
    {
      fscanf(fichier, "%s %s %s", &mot1, &mot2, &mot3);
      printf("Les trois mots sont : %s, %s et %s", &mot1, &mot2, &mot3);

      fclose(fichier);
     }

   else
   {
       printf("Impossible d'utiliser le jeu...\n");
   }
}
