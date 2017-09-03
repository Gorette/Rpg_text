#include "engine.h"

t_usable	*gen_usable(char *name, int hp, int mp, int price)
{
	t_usable	*item;

	if (!(item = malloc(sizeof(t_usable))))
		return (0);
	item->name = name;
	item->hp = hp;
	item->mp = mp;
	item->price = price;
	return (item);
}
