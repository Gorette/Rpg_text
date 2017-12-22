#include "engine.h"

void	write_msg(char *msg)
{
	write(1, msg, ft_strlen(msg));
}

void	sys_msg(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	write_msg("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	while (str[i])
	{
		if (j == 0)
			write_msg("#  ");
		j++;
		write(1, &str[i], 1);
		i++;
		if (j == 40)
		{
			write_msg("  #\n");
			j = 0;
		}
	}
	while (j++ < 42)
		write(1, " ", 1);
	write(1, "#\n", 2);
	write_msg("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
