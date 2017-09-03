#include "engine.h"

char	*ft_itoa(int nb)
{
	int		taille;
	int		test;
	int		i;
	char	*str;

	i = 0;
	test = nb;
	taille = 1;
	while ((nb = nb / 10) > 0)
	{
		taille = taille * 10;
		i++;
	}
	str = malloc(sizeof(*str) * i);
	i = 0;
	while (taille)
	{
		str[i] = (test / taille) + '0';
		test = test % taille;
		taille = taille / 10;
		i++;
	}
	return (str);
}
