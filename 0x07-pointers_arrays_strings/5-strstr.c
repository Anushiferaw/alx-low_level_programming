#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates a sustring
 * @haystack: string to search in
 * @needle: substringto look for
 * Return: pointerto the beginning of the located sub string
 * or NULL if the sustring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[1] != '\0'; i++)
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (!needle[j])
return (&haystack[i]);
}
return (NULL);
}
