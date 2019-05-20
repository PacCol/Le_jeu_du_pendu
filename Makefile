all:
	gcc -o jeu bienvenue.c fin.c main.c jeu.c lireCaractere.c printCoup.c dico.c rejouer.c
clean:
		rm -f jeu
