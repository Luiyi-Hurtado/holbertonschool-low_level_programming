#include <stdio.h>

/**
*main - Entry point
*
*
*Return: 0
*/

int main(void)
{
	int nuo, nut, nuth;

	for (nuo  = '0' ; nuo <= '9' ; nuo++ )
	{
		for (nut = '0' ; nut <= '9' ; nut++)
		{
			for (nuth = '0' ; nuth <= '9' ; nuth++)
			{
				if (nuth > nut && nut > nuo)
				{
					putchar(nuo);
					putchar(nut);
					putchar(nuth);
			
					if (nuo < '7' && nut < nuth)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
