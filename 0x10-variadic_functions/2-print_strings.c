#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator
 * @n: no of args
 * @...: the args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	char *str;
	va_list args;

	if (!n)
	{
		putchar('\n');
		return;
	}
	va_start(args, n);

	while (i--)
		printf("%s%s", (str = va_arg(args, char *)) ? str : "(nil)"
				, i ? (separator ? separator : "") : "\n");
	va_end(args);
}
