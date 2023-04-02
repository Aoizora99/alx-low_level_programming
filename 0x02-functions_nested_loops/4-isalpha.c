#include "main.h"
/**
 * _isalpha - Shows 1 is the input is a
 * letter. Another case, shows 0.
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
_putchar('\n');
}
