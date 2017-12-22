#include "engine.h"

t_item		*gen_item(char *name, int type, int attack, int defense, int price, int id)
{
	t_item	*item;

	if (!(item = (t_item *)malloc(sizeof(t_item) * 1)))
		return (NULL);
	item->name = name;
	item->type = type;
	item->attack = attack;
	item->defense = defense;
	item->price = price;
	item->id = id;
	item->equiped = 0;
	return (item);
}

t_item		**init_items(void)
{
	t_item		**items;

	if (!(items = (t_item **)malloc(sizeof(t_item*) * NB_ITEMS)))
		return (NULL);
	items[0] = gen_item("rusty spoon", 0, 10, 0, 50, 2);
	items[1] = gen_item("sharpened stone", 1, 0, 5, 30, 3);
	items[2] = gen_item("ragged coat", 2, 0, 10, 50, 4);
	items[3] = gen_item("shabby pants", 5, 0, 8, 40, 5);
	items[4] = gen_item("getas", 3, 0, 4, 10, 6);
	items[5] = gen_item("epic armor", 2, 0, 50, 100, 7);
//	items[5] = gen_item();
	return (items);
}

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

t_usable	**init_usable(void)
{
	t_usable	**usable_items;
	t_usable	*hp_potion;
	t_usable	*mp_potion;

	if (!(usable_items = malloc(sizeof(t_usable) * 2)))
		return (NULL);
	hp_potion = gen_usable("", 50, 0, 10);
	mp_potion = gen_usable("", 0, 50, 10);
	usable_items[0] = hp_potion;
	usable_items[1] = mp_potion;
	return (usable_items);
}

t_inv		*init_inventory(t_item **items, t_usable **usable_items)
{
	t_inv	*inventory;
	int		*backpack;;

	if (!(inventory = (t_inv *)malloc(sizeof(t_inv))))
		return (NULL);
	if (!(backpack = (int *)malloc(sizeof(int) * NB_ITEMS + 2)))
		return (NULL);
	ft_bzero(backpack, (sizeof(int) * NB_ITEMS + 2));
	backpack[0] = 3;
	backpack[1] = 3;
	backpack[2] = 1;
	backpack[3] = 1;
	backpack[4] = 1;
	backpack[5] = 1;
	backpack[6] = 1;
	backpack[7] = 1;
	inventory->items = items;
	inventory->usable_items = usable_items;
	inventory->backpack = backpack;
	return (inventory);
}
