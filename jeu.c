#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "prototype.h"

void jeu()
{
	
	while (1) {
		
	char lettre = 0;
	char motSecret[100] = {0};
	int longueurMot = 0;
	int coups = 19;
	int gagne = 0;
	char* lettreTrouvee;

	piocherMot(&motSecret);
	longueurMot = strlen(motSecret);
	coups = longueurMot * 3;
	lettreTrouvee = malloc(longueurMot);
	memset(lettreTrouvee, 0, longueurMot);

	bienvenue();

	do
	{
		printCoup(&coups);
		printf("Voici le mot secret : ");

		for (int i = 0; i < longueurMot; i++) {
			if (lettreTrouvee[i])
				printf("%c", motSecret[i]);
			else
				printf("*");
		}

		printf("\nTapez une lettre majuscule contenue dans le mot : ");
		lettre = lireCaractere();

		for(int i = 0;motSecret[i] != '\0'; i++)
		{
			if(motSecret[i] == lettre)
				lettreTrouvee[i] = 1;
		}

		gagne = 1;
		for (int i = 0; i < longueurMot; i++) {
			if (lettreTrouvee[i] != 1) {
				gagne = 0;
			}
		}

		coups = coups - 1;
	} while (coups != 0 && gagne != 1);

	fin(&gagne, motSecret);

	free(lettreTrouvee);
	
	rejouer();
	
}
}
