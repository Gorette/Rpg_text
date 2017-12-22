#include "engine/engine.h"

int		main(int argc, char **argv)
{
	t_char	*player;
	t_item	**items;
	t_usable	**usable_items;
	t_inv		*inventory;

	player = choose_character();
	items = init_items();
	usable_items = init_usable();
	inventory = init_inventory(items, usable_items);
	hud_normal(*player);
	while (1)
		redirect_main(get_input(player), player, inventory);
	return (0);
}
