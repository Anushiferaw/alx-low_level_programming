#include "main.h"
/**
 * print_alphabet - prints alphabet, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar(10);
}
