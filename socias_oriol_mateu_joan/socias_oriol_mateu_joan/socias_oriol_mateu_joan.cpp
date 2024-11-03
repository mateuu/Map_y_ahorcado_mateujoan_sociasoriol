#include <stdio.h>
#include <stdlib.h>

#define MAPSIZE 10

int main() 
{
	char map[MAPSIZE][MAPSIZE];
	int pX = 0, pY = 0;
	int vides = 3;
	int lletracorrecte = 0;
	char paraula[] = "excelent";
	int longparaula = 8;
	char estatparaula[9] = "________";

	for (int i = 0; i < MAPSIZE; i++) {
		for (int j = 0; j < MAPSIZE; j++) {

			map[i][j] = '-';
		}
	}
	map[pX][pY] = 'X';
	map[4][4] = 'R';

	while (vides > 0)
	{
		system("cls");
		for (int i = 0; i < MAPSIZE; i++)
		{
			for (int j = 0; j < MAPSIZE; j++)
			{
				printf("%c", map[i][j]);
			}
			printf("\n");
		}

	printf("Quina accio vols fer? \n");
	printf("1. Moure amunt. \n2. Moure abaix. \n3. Moure esquerra. \n4. Moure dreta. \n");

	int accio;
	scanf_s("%d", &accio);

	map[pX][pY] = '-';

	switch (accio) {
	case 1:
		if (pX > 0) pX--;
		break;
	case 2:
		if (pX < 9) pX++;
		break;
	case 3:
		if (pY > 0) pY--;
		break;
	case 4:
		if (pY < 9) pY++;
		break;
	default:
		break;
	}
	map[pX][pY] = 'X';

	if (pX == 4 && pY == 4)
	{
		printf("Has trobat el repte del penjat! \n");
		while (vides > 0 && lletracorrecte < longparaula)
		{

			printf("Paraula: ");
			for (int i = 0; i < longparaula; i++)
			{
				printf("%c", estatparaula[i]);
			}
			printf("\n");

			char lletra;
			printf("Donam una lletra: ");
			scanf_s(" %c", &lletra, 1);

			int encerts = 0;

			for (int i = 0; i < longparaula; i++)
			{
				if (paraula[i] == lletra && estatparaula[i] == '_')
				{
					estatparaula[i] = lletra;
					lletracorrecte++;
					encerts = 1;
				}
			}

			if (encerts)
			{
				printf("Lletra correcte. \n");
			}
			else
			{
				vides--;
				printf("LLetra incorrecte. Et queden %d vides.\n", vides);
			}
		}
		if (lletracorrecte == longparaula)
		{
			system("cls");
			printf("Felicitats, has completat el repte. \n");
		}
		else
		{
			system("cls");
			printf("Ho sento, has perdut el repte. \n");
		}
		break;
		}
	}
}