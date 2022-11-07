#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

	printf("Jeu du plus ou moins cree par Thibaut TIENNOT \n\n");
	printf("Le but du jeu est de deviner le nombre mystere ! :) \n");
	int nombreMystere = 0, nombreEntre = 0, nombreCoups = 0, continuerPartie = 1, niveauDifficulte = 0, MAX = 1, modejeu = 0;
	const int MIN = 1;

	do
	{
		nombreCoups = 0;
		printf("Menu \n\n");
		printf("Choisissez un mode de jeu : \n");
		printf("1. Mode 1 joueur \n");
		printf("2. Mode 2 joueurs \n");

		do
		{

			printf("Votre choix ? ");
			scanf("%d", &modejeu);
		} while (modejeu < 1 || modejeu > 2);
		switch (modejeu)

		{
		case 1:
			srand(time(NULL));
			printf("----------------\n");
			break;

		case 2:
			printf("\nChoisissez un nombre a faire deviner a votre adversaire : ");
			scanf("%d", &nombreMystere);
		}

		if (modejeu == 1)
		{

			printf("Choisissez un niveau de difficulte : \n");
			printf("1. Niveau facile : Entre 1 et 100 \n");
			printf("2. Niveau moyen : Entre 1 et 1000 \n");
			printf("3. Niveau difficile : Entre 1 et 10000 \n");

			do
			{

				printf("Votre choix ? ");
				scanf("%d", &niveauDifficulte);
			} while (niveauDifficulte < 1 || niveauDifficulte > 3);

			printf("-----------------\n");

			if (niveauDifficulte == 1)
			{

				MAX = 100;
				nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

			}

			else if (niveauDifficulte == 2)

			{

				MAX = 1000;
				nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

			}

			else if (niveauDifficulte == 3)

			{

				MAX = 10000;
				nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

			}

		}
		system("cls");
		printf("\n");
		printf("Devinez le nombre mystere !\n");

		do
		{
			nombreCoups++;
			printf("Quel est le nombre ? ");
			scanf("%d", &nombreEntre);
			if (nombreEntre < nombreMystere)

			{

				printf("C'est plus !\n");

			}

			else if (nombreEntre > nombreMystere)

			{

				printf("C'est moins !\n");

			}

			else

			{

				printf("\nBravo, vous avez trouve le nombre mystere en %d coups\n", nombreCoups);

			}
		} while (nombreEntre != nombreMystere);

		printf("\n------------------------------------\n");
		printf("Souhaitez-vous refaire une partie ?\n");
		printf("1. Oui\n");
		printf("2. Non\n");
		printf("Votre choix ? ");
		scanf("%d", &continuerPartie);
		printf("-------------------------------------\n\n");

	} while (continuerPartie == 1);

	return 0;
}