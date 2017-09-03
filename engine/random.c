#include "engine.h"

int		random_int(int min, int max)
{
	int		nb;

	srand(time(NULL));
	nb = (rand() % ((max + 1) - min)) + min;
	return (nb);
}
