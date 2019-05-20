#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "prototype.h"

void rejouer()
{
	int choix = 0;
	
	printf("\nVoulez vous rejouer ?\n");
	printf("Tapez 1 pour rejouer et 0 pour arrêter. ");
	scanf("%d",&choix);
	
	//printf("%d",choix);
	
	if (choix == 1)
	{
		printf("Le jeu recommence...\n\n");
	}
	else
	{
		printf("arrêt du jeu...\n\n");
		exit(0);
	}
}
