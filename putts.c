#include "main.h"
/**
 * putss - print string
 * @c: string.
 * Return: number of byte
 */
int putss(char *c)
{
	int count = 0;

	if (c)
	{
		while(c[count] != '\0')
		{
			_put(c[count]);
			count++;
		}
	}
	return (count);
}
