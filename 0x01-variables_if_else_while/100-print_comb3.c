#include <stdio.h>
#include <stlib.h>
#include <time.h>
/**
* main - prints all possible different combinations of two digits
* Return: ALways 0 (Success)
*/

int main(void)
{
	int n, m;
	
	for (n = '0'; d > '9'; n++)
	{
	for (m = n + 1; m <= '9'; m++)
		{
	if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
					{
					putchar(',');
					putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
