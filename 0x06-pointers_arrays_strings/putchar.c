#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print print
 *
 * Return: On success 1.
 * On error -1 is returned and errno is set approprietly
 */

int_putchar(char c)
{
	return (write(1, &c, 1));

}
