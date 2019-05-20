#include <stdio.h>
#include <stdlib.h>

#include "prototype.h"

void fin(int* pointeurGagne, char* pointeurMotSecret)
{
    if (*pointeurGagne) {
	printf("Vous avez gagné !\n");
	printf("Le mot mystère était bien %s.\n\n", pointeurMotSecret);
    }
    
    else {
	printf("Vous avez perdu !!!\n");
    }
}
