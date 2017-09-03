#include "header.h"

void	ft_putstr(char *str)
{
	int		select;

	select = 0;
	while (str[select])
	{
		ft_putchar(str[select]);
		select++;
	}
}
