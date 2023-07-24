#include "main.h"

int (*format_spec(char c))(va_list)
{
	int i =0;
	fmt_t functions[] = {
	{'%', print_percent},
	{'c', print_char},
	{'s', print_string}
	};

	for (i = 0; i < 3; ++i)
	{
		if (functions[i].s == c)
		{
			return (functions[i].frmt_spec);
		}
	}
return (NULL);	
}
