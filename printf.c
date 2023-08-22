#include "main.h"

/*
* _printf - function to print on the console
* @format: is a pointer to const char 
* Return: int
*/
int _printf(const char *format, ...)
{
	va_list ptr;      
	int counter = 0, Printed = 0, buff_index = 0, i = 0;       
	char Buffer[BUFF_SIZE];

	va_start(ptr, format); 

	while (format[i] != '\0') 
	{
        print_buff(Buffer, &buff_index);
		if (format[i] == '%') 
		{
			i++; 
			if (format[i] == '%') 
			{
				Buffer[buff_index++] = '%';
				if (buff_index == BUFF_SIZE)
				{
					print_buff(Buffer, &buff_index);
					counter += buff_index;
				}
			} else if (format[i] == 'c') 
			{
				int ch = va_arg(ptr, int); 
				Buffer[buff_index++] = ch;
				if (buff_index == BUFF_SIZE)
				{
					print_buff(Buffer, &buff_index);
					counter += buff_index;
				}
			} else if (format[i] == 's') 
			{
				char *str = va_arg(ptr, char *); 
				while (*str) 
				{
					Buffer[buff_index++] = *str;
					str++;
					if (buff_index == BUFF_SIZE)
					{
						print_buff(Buffer, &buff_index);
						counter += buff_index;
					}
				}
			} else if (format[i] == 'd' ||
			           format[i] == 'i') 
			{
				int value = va_arg(ptr, int);
				Printed = print_int(value);
				counter += Printed;
			}
		} else 
		{
			Buffer[buff_index++] = format[i];
			if (buff_index == BUFF_SIZE)
			{
				print_buff(Buffer, &buff_index);
				counter += buff_index;
			}
		}
		i++;
	}
	print_buff(Buffer, &buff_index);
	counter += buff_index;
	va_end(ptr); 
	return counter; 
}

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

	*buff_index = 0;
}


