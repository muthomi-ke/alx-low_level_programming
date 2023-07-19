#include "main.h"
#include <unistd.h>
/**
 * _islower - inspect the given character is lower case
 * @c: character to test
 *
 * Return: 1 (True) else 0 (False)
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

