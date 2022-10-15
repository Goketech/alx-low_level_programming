#include <stdio.h>

/**
 * main - Print the alphabet in lowercase letters, except for e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
	        alpha++;
	}
        putchar('\n');

        return (0);
}	
