#include "engine.h"

char	*get_name(void)
{
	char	*input;
	int		ret;

	if (!(input = (char *)malloc(sizeof(char) * 1024)))
		return (NULL);
	ret = read(0, input, 1024);
	input[ret - 1] = '\0';
	return (input);
}

char	*get_input(t_char *player)
{
	char	*input;
	int		ret;

	if (!(input = (char *)malloc(sizeof(char) * 1024)))
		return (NULL);
	write(1, player->name, ft_strlen(player->name));
	write(1, " : ", 3);
	ret = read(0, input, 1024);
	input[ret] = '\0';
	return (ft_strlowcase(input));
}
