#include <stdio.h>

/**
 * main - Prints alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[51] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 51; i++)
{
putchar(alp[i]);
}
return (0);
}

