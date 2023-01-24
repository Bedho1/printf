#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
/* SIZES */
#define S_LONG 2
#define S_SHORT 1

int _printf(const char *format, ...);
int print_int(va_list l, flags_t *f);
int print_unsigned(va_list l, flags_t *f);
void print_number(int n);
int count_digit(int i);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
print_non_printable(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_rot13(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int get_flag(const char *format, int *i);
int print_size(const char *format, int *i);
int print_width(const char *format, int *i, va_list list);
int print_precision(const char *format, int *i, va_list list);
int handle_print(const char *fmt, int *ind, va_list list, char buffer[], int flags, int width, int precision, int size);

#endif
