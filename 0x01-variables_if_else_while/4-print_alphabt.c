#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: 0 if successful
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
