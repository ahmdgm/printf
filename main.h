<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define BUFF_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(int value);
void print_buff(char buffer[], int *buff_ind);

#endif
=======
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define BUFF_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(int value);
void print_buff(char buffer[], int *buff_ind);

#endif
>>>>>>> d33e5c4f829eab409346e2fb95661d26a71ca1b0
