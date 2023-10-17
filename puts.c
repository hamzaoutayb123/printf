#include "main.h"

/**
 * _puts - Entry point
 *
 * @s: input
 *
 */

void _puts(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
