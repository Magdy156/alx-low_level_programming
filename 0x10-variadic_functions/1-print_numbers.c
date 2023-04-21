#include "variadic_functions.h"
/**
 * print_numbers - prints strings, followed by a new line
 * @separator: separator
 * @n: no of args
 * @...: the args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list args;

	if (!n)
	{
		putchar('\n');
		return;
	}
	va_start(args, n);

	while (i--)
		printf("%d%s", va_arg(args, int)
				, i ? (separator ? separator : "") : "\n");
	va_end(args);
}
