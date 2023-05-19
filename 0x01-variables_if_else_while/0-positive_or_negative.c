#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description ********
 * prints whether the number stored in the variable n is positive or negative. 
 * The variable n will store a different value every time you run this program. 
 * You don't have to understand what rand, srand, and RAND_MAX
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The number %d ", n);
if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");
return (0);
}
