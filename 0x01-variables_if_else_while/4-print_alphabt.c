#include <stdio.h>
/**
 * main - Prints alphabet.
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[24] = "abcdfghijklmnoprstuvwxyz"; /* string with alphabet */
int i;
for (i = 0; i < 24; i++)
{
putchar(alp[i]); /* print each char with putchar */
}
putchar('\n');
return (0);
}
