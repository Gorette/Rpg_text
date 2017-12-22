#include "engine.h"

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != '\n')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
