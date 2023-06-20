#include <unitd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and ernno is set appropraitely.
_putchar(char)
{
	return (write(1, &c, 1));
}	
