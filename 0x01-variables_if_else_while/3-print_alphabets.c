#include <stdio.h>
/*
* main function, as required
*  The main function is the entry point of a C program.
*  return 0 to indicate that the program completed successfully
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
