#include "header.h"

int		display_name(void)
{
	char	**table;
	char	*str;
	int		select;

	select = 0;
	table = ft_table();
	str = table[random_int(0, 7)];
	ft_putstr(str);
	return (0);
}
