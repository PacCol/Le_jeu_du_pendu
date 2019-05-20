#ifndef PROTOTYPE_H
#define PROTOTYPE_H

extern void jeu();
extern char lireCaractere();
extern void bienvenue();
extern void printCoup(int* pointeurCoup);
extern void fin(int* pointeurGagne, char* pointeurMotSecret);
extern int piocherMot(char *motPioche);
extern int nombreAleatoire(int nombreMax);
extern void rejouer();

#endif
