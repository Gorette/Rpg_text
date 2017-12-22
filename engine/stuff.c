#include "engine.h"

int		stuff_atk(t_item **stuff)
{
	int		atk;
	int		i;

	i = 0;
	atk = 0;
	while (i < 7)
	{
		if (stuff[i] != NULL)
			atk = atk + stuff[i]->attack;
		i++;
	}
	return (atk);
}

int		stuff_def(t_item **stuff)
{
	int		def;
	int		i;

	i = 0;
	def = 0;
	while (i < 7)
	{
		if (stuff[i] != NULL)
			def = def + stuff[i]->defense;
		i++;
	}
	return (def);
}

void	equip_stuff(t_char *player, t_inv *inventory)
{
	char	*input;
	int		levier;
	int		i;

	i = 0;
	levier = 0;
	while (levier == 0)
	{
		write_msg("What item do you want to equip ?\n");
		input = get_input(player);
		input[ft_strlen(input) - 1] = '\0';
		if (ft_strcmp(input, "exit") == 0)
			break ;
		while (i < NB_ITEMS)
		{
			if (ft_strcmp(input, (inventory->items[i])->name) == 0 && inventory->backpack[(inventory->items[i])->id] > 0)
			{
				if (player->stuff[(inventory->items[i])->type] != NULL)
					(player->stuff[(inventory->items[i])->type])->equiped = 0;
				player->stuff[(inventory->items[i])->type] = inventory->items[i];
				(inventory->items[i])->equiped = 1;
				write_msg("Anything else ? (yes/no)\n");
				input = get_input(player);
				if (ft_strcmp(input, "yes\n") != 0)
					levier = 1;
				i = NB_ITEMS + 1;
			}
			i++;
		}
		if (i == NB_ITEMS)
			write_msg("No corresponding item\n");
		i = 0;
	}
}
