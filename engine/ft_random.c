#include "engine.h"

int		ft_random(void)
{
	int		x;
	int		y;

	srand( time(NULL) + (2 + time(NULL)) );
	y = (rand() % (11 - 1) ) + 1;
	x = (rand() % (11 - 1) ) + 1;
	printf("%d - ", y);
	printf("%d\n", x);
	return (0);
}
