#include "libft.h"

void	print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}