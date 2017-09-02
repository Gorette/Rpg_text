#include "engine.h"

int		check_input(char *str, char **tab, int size)
{
	char	*str_low;
	int		i;

	i = 0;
	str_low = ft_strlowcase(str);
	while (ft_strcmp(str_low, tab[i]) != 0 && i < size)
		i++;
	if (i == size)
		return (-1);
	return (i);
}
