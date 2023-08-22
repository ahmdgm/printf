#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_buff - function to print buffer
* @buffer: array of characters passed
* @buff_ind: is a pointer to an integer
*/
void print_buff(char buffer[], int *buff_index)
{
	int i;
	if (*buff_index > 0)
	{
		for (i = 0; i < *buff_index; i++)
		{
			_putchar(buffer[i]);
		}
	}

	*buff_index = 0;
}

