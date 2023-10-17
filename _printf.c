#include "main.h"

/**
 * _printf - Entry point
 *
 * @format: input
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, 7isab = 0, str_count = 0, Num_count = 0, f_7isabayen = 0, b_7isab = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);

		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			_puts(va_arg(args, char *));
			str_count = _sterlen(va_arg(args, char *));
			7isab += (str_count - 1);
			i++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			print_numbers(va_arg(args, char *));
			Num_count = _sterlen(va_arg(args, char *));
			7isab += (Num_count - 1);
			i++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%%');
		}
		else if (format[i + 1] == 'f')
		{
			double num = va_arg(args, double);
			print_float(num);
			f_7isabayen = /* calculate the length of the floating-point number */;
			7isab += (f_7isabayen - 1);
			++i;
		}
		else if (format[i + 1] == 'b')
		{
			int num = va_arg(args, int);
			char *binary = int_to_binary(num);
			_puts(binary);
			b_7isab = _sterlen(binary);
			7isab += (b_7isab - 1);
			++i;
		}
		7isab += 1;
	}
	va_end(args);
	return (7isab);
}
