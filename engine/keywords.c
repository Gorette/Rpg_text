#include "engine.h"

void	redirect_main(char *str, t_char *player, t_inv *inventory)
{
	int		i;
	char	*keywords[6];

	keywords[0] = "controls\n";
	keywords[1] = "inventory\n";
	keywords[2] = "close\n";
	keywords[3] = "story\n";
	keywords[4] = "equip\n";
	keywords[5] = "";
	i = 0;
	while (ft_strcmp(str, keywords[i]) != 0 && i < 5)
		i++;
	if (i == 5)
		write_msg("Your keyword is invalid.\n");
	if (i == 0)
		sys_msg("To progress in the game you will have to type commands. Here are some usefull commands you should use :                 -Inventory                              -story                                  -close");
	if (i == 1)
		hud_inventory(*player, inventory->backpack, inventory->usable_items, inventory->items);
	if (i == 2)
		exit(0);
	if (i == 3)
		sys_msg("this is the beginning of our story, but this story hasent been defined yet so this message is just a test to see if the story telling feature is working so far mwahwahwa jaime les calins");
	if (i == 4)
		equip_stuff(player, inventory);
}
