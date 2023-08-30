/**
 * main : to test the code
 * return : 0
*/
#include <stdio.h>

int main()
{
	int num = 35;
	char character = 'A';
	char string[] = "Hello, World!";

	_printf("Printing an integer: %d \n", num);
	_printf("Printing an integer: %b \n", num);
	_printf("Printing a character: %c\n", character);
	_printf("Printing a string: %s\n", string);

	return 0;
}