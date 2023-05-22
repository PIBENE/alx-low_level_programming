#include <stdio.h>
/* 
* Description:
* The main function is the entry point of the program.
* It takes no arguments and returns an integer value.
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
/* 
* Return 0 to indicate that the program completed successfully 
*/
return (0);
}
