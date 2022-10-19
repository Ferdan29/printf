#include <unistd.h>
#include "main.h"
/**
 * _putchar - write out the char c to stdio output
 * @c: variable to be checked
 *
 * Return: 1 on sucess and -1 on fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
