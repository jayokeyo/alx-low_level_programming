#include "main.h"
/**
 * _islower - Checks if an input is lowercase or uppercase.
 *
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	char alpha;
	int ctrl;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
			ctrl = 1;
		else
			ctrl = 0;
	}
	return (ctrl)
}
