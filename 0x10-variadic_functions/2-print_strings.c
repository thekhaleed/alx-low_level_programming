#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- prints out strings
 * @separator: separates strings
 * @n: int
 *
 * Return:nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *ptr;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}

