#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - mini desc.
* Description: function that generate a random number + typing it's type
* Return: always 0
*/
int main(void)
{
int n;  /* Declaration of the variable n */
srand(time(NULL));  /* Initialize random seed */
n = rand() % RAND_MAX;  /* Generate a random number */
printf("%d is ", n);
if (n > 0)
{
printf("positive");
}
else if (n == 0)
{
printf("zero");
}
else
{
printf("negative");
}
printf("\n");
return (0);
}

