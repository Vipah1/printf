#include "main.h"

/**
 * _putchar - writes a given character
 * @c: the character
 *
 * Return: 0 if success, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
