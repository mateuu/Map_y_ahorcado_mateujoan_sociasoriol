#include <stdio.h>
#include <stdlib.h>


int main() {
	char map[10][10];
	int pX = 0, pY = 0;


	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			map[i][j] = '-';
		}
	}
	map[pX][pY] = 'X';
	map[4][4] = 'R';
}