#include "main.h"

int (*format_spec(char c))(va_list)
{
	int i =0;
	fmt_t functions[] = {
	{'%', print_percent},
	{'c', print_char},
	{'s', print_string},
	{'i', print_int},
	{'d', print_int}
	};

	for (i = 0; i < 5; ++i)
	{
		if (c == functions[i].s)
		{
			return (functions[i].frmt_spec);
		}
	}
return (0);
}
