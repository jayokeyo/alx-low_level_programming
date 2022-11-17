#include "main.h"
#include <unistd.h>
/** _putchar - prints a character
 * @c: input character
 * Return: Always 0 Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
