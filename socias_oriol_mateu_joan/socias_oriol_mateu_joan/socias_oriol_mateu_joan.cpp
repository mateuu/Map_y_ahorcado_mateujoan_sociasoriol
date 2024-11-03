#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char map[10][10];
	int pX = 0, pY = 0;
	int vides = 3;


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
}