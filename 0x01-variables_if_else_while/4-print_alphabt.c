#include <stdio.h>

/**
 * main - Print the alphabet in lowercase letters, except for e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char low,
e, q;
e = 'e';
q = 'q';
for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
}
printf("\n");
return (0);
}
