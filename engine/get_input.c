#include "engine.h"

char	*get_input(void)
{
	char	*input;
	int		ret;

	input = malloc(sizeof(char) * 1024);
	ret = read(0, input, 1024);
	input[ret] = '\0';
	return (input);
}
