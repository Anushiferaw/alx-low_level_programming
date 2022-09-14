#include "main.h"
/**
* print_alphabet_x10 - function to print a-z  to the standard out put 10 times
*/
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 0; j <= 9; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
