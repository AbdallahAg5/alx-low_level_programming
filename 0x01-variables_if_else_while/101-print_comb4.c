#include <stdio.h>
/**
* main -  prints all possible different combinations of two digits.
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int j;
int z;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (z = j + 1; z < 10; z++)
{
putchar(i + '0');
putchar(j + '0');
putchar(z + '0');
if (i != 8 || j != 9 || z != 8)
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
