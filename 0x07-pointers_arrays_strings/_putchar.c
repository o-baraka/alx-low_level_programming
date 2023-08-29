#include <unistd.h>

/**
 *_putcar.c - writes the character c to stdout
*@c: The character to print

*Return: on successs 1.
*on error, -1 is returned, and the error is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
