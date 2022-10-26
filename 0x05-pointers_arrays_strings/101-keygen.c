#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - Entry point
 * @len: Length of password
 * Return: Generated password
 */
int main(len)
{
	int c = 0;
	srand(time(NULL));
	char randChar;
	
	while (c < len)
	{
		srand(time(NULL));
		randChar = "ABCDEFGHIKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
		c++;
	}
	return (randChar);
}
