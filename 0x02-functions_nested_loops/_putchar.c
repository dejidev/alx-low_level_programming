#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the charaectr c to stdout
 * @c: the character t display
 *
 * Return : On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
