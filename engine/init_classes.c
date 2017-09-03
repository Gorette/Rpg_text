#include "engine.h"

t_char		*init_baeth()
{
	t_char	*baeth;

	baeth = malloc(sizeof(t_char));
	baeth->name = "Baeth";
	baeth->lvl = 0;
	baeth->xp = 0;
	baeth->current_xp = 0;
	baeth->max_hp = 100;
	baeth->hp = 100;
	baeth->max_mp = 100;
	baeth->mp = 100;
	baeth->attack = 10;
	baeth->defense = 10;
	baeth->magic = 25;
	baeth->gold = 0;
	baeth->comp1 = -1;
	baeth->comp2 = -1;
	baeth->comp3 = -1;
	return (baeth);
}
