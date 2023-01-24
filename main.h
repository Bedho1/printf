#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flag - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flag
{
	int plus;
	int space;
	int hash;
} flag_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flag_t *f);
} ph;


int print_int(va_list l, flag_t *f);
void print_number(int n);
int print_unsigned(va_list l, flag_t *f);
int count_digit(int i);


int print_hex(va_list l, flag_t *f);
int print_hex_big(va_list l, flag_t *f);
int print_binary(va_list l, flag_t *f);
int print_octal(va_list l, flag_t *f);


char *convert(unsigned long int num, int base, int lowercase);

int _printf(const char *format, ...);

int (*get_print(char s))(va_list, flag_t *);

int get_flag(char s, flag_t *f);
int get_flag(const char *format, int *f)

int print_string(va_list l, flag_t *f);
int print_char(va_list l, flag_t *f);


int _putchar(char c);
int _puts(char *str);

int print_rot13(va_list l, flag_t *f);
int print_rev(va_list l, flag_t *f);
int print_print_non_printable(va_list l, flag_t *f);


int print_address(va_list l, flag_t *f);
int print_size(const char *format, int *i)
int print_width(const char *format, int *i, va_list list)
int print_precision(const char *format, int *i, va_list list)

int print_percent(va_list l, flag_t *f);

int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
	int flag, int width, int precision, int size)


#endif
