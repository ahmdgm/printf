#include "main.h"

/*
* print_int - function to print int numbers
* @value: value passed to print it
* Return: int
*/
int print_int(int val)
{
	char buffer[32]; 
	int printed = 0;
	int j;
	int i = 0;

	if (val < 0)
	{
		_putchar('-');
		printed++;
		val = -val;
	}

	do{
		buffer[i++] = '0' + (val % 10);
		val /= 10;
		printed++;
	} while (val > 0);
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}

	return (printed);
}
