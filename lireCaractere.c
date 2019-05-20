#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "prototype.h"

char lireCaractere()
{
 	char caractere = 0;

	caractere = getchar();
	caractere = toupper(caractere);

	while (getchar() != '\n');

	return(caractere);
}
