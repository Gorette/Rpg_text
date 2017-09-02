#include "engine/engine.h"

int		main(int argc, char **argv)
{
	char	*msg;
	int		test;

	write_msg("Hello World !\n");
	msg = get_input();
	write_msg(msg);
	write_msg(ft_strlowcase(msg));
	test = check_input(msg, argv, 3);
	printf("%d\n", test);
	return (0);
}
