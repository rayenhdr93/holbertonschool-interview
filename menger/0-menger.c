#include "menger.h"
/**
 * menger - function that draws a 2D Menger Sponge
 * @level: the level of the Menger Sponge to draw
*/
void menger(int level)
{
	int i, j, s, x, y;
	char c;

	s = pow(3, level);

	for (i = 0; i < s; i++)
	{
		for (j = 0; j < s; j++)
		{
			c = '#';
			x = i;
			y = j;
			while (x > 0)
			{
				if (x % 3 == 1 && y % 3 == 1)
					c = ' ';
				x /= 3;
				y /= 3;
			}
			printf("%c", c);
		}
		printf("\n");
	}
}