#include "main.h"

/**
 * print_chessboard - prints the chessboard on the terminal
 * @a: the character to print
 *
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}


