#include <stdio.h>
#include "main.h"
/**
 * _strstr - Locates a substring.
 *
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: If the substring is found - a pointer to the beginning of the
 * substring. Otherwise - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
char *haystack_ptr, *needle_ptr;
if (!*needle)
return (haystack);
while (*haystack)
{
haystack_ptr = haystack;
needle_ptr = needle;
while (*haystack_ptr && *needle_ptr && *haystack_ptr == *needle_ptr)
{
haystack_ptr++;
needle_ptr++;
}
if (!*needle_ptr)
return (haystack);
haystack++;
}
return (NULL);
}
