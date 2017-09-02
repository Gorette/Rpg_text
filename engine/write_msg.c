#include "engine.h"

void	write_msg(char *msg)
{
	write(1, msg, ft_strlen(msg));
}
