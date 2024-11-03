#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char map[10][10];
	int pX = 0, pY = 0;
	int vides = 3;
	int lletracorrecte = 0;
	char paraula[] = "excelent";
	int longparaula = 8;
	char estatparaula[9] = "________";

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			map[i][j] = '-';
		}
	}
	map[pX][pY] = 'X';
	map[4][4] = 'R';

	while (vides > 0)
	{
		system("cls");
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				printf("%c", map[i][j]);
			}
			printf("\n");
		}
	}

	printf("Quina accio vols fer? \n");
	printf("1. Moure amunt. \n 2. Moure abaix. \n 3. Moure esquerra. \n 4.Moure dreta.");

	int accio;
	scanf_s("%d", &accio);

	map[pX][pY] = '-';
	switch (accio)
	{
	case 1:
		if (pX > 0)
		{
			pX--;
		}
	case 2:
		if (pX < 9)
		{
			pX++;
		}
	case 3:
		if (pY > 0)
		{
			pY--;
		}
	case 4:
		if (pY < 9)
		{
			pY++;
		}
	default:
		printf("Accio no valida");
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
				if (paraula[i] == lletra && estatparaula[i] == '-')
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