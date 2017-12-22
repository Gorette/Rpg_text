#include "engine.h"

int		hud_offset(int stat1, int stat2, int stat3, int default_offset)
{
	int		offset;
	int		len;

	offset = 0;
	if (stat1 >= 0)
	{
		len = ft_strlen(ft_itoa(stat1));
		while (len > 0)
		{
			len--;
			offset++;
		}
	}
	if (stat2 >= 0)
	{
		len = ft_strlen(ft_itoa(stat2));
		while (len > 0)
		{
			len--;
			offset++;
		}
	}
	if (stat3 >= 0)
	{
		len = ft_strlen(ft_itoa(stat3));
		while (len > 0)
		{
			len--;
			offset++;
		}
	}
	return (default_offset - offset);
}

void	hud_normal(t_char player)
{
	write_msg("----------------------------------------------\n");
	write_msg("|   level : ");
	ft_putnbr(player.lvl);
	write(1, "                      ", hud_offset(player.lvl, player.xp, player.current_xp, 24));
	write_msg("xp : ");
	ft_putnbr(player.current_xp);
	write_msg("/");
	ft_putnbr(player.xp);
	write_msg("   |\n");
	write_msg("----------------------------------------------\n");
}

void	hud_inventory(t_char player, int *inventory, t_usable **usable_items, t_item **items)
{
	int		i;
	int		attack;
	int		defense;

	attack = player.attack + stuff_atk(player.stuff);
	defense = player.defense + stuff_def(player.stuff);
	i = 0;
	write_msg("----------------------------------------------\n");
	write_msg("|                    Stats                   |\n");
	write_msg("|   attack : ");
	ft_putnbr(attack);
	write(1, "                                  ", hud_offset(attack, defense, -1, 19));
	write_msg("defense : ");
	ft_putnbr(defense);
	write_msg("   |\n");
	write_msg("|   HP : ");
	ft_putnbr(player.hp);
	write(1, "                                  ", hud_offset(player.hp, player.mp, -1, 28));
	write_msg("MP : ");
	ft_putnbr(player.mp);
	write_msg("   |\n");
	write_msg("----------------------------------------------\n");
	write_msg("|   usable items :                           |\n");
	while (i < 2)
	{
		if (inventory[i] > 0)
		{
			write_msg("| ");
			ft_putnbr(inventory[i]);
			write_msg("  ");
			write_msg(usable_items[i]->name);
			if (usable_items[i]->hp > 0)
			{
				write(1, " hp potion                                     ", hud_offset(inventory[i], usable_items[i]->hp, -1, 36));
				ft_putnbr(usable_items[i]->hp);
				write_msg(" HP ");
			}
			if (usable_items[i]->mp > 0)
			{
				write(1, " mp potion                                     ", hud_offset(inventory[i], usable_items[i]->mp, -1, 36));
				ft_putnbr(usable_items[i]->mp);
				write_msg(" MP ");
			}
			write_msg(" |\n");
		}
		i++;
	}
	write_msg("----------------------------------------------\n");
	write_msg("|   weapons :                                |\n");
	while (i < NB_ITEMS + 2)
	{
		if (inventory[i] > 0 && items[i - 2]->type < 2)
		{
			if (items[i - 2]->equiped == 0)
				write_msg("| ");
			else
				write_msg("|>");
			write_msg(items[i - 2]->name);
			write(1, "                                        ", hud_offset(items[i - 2]->attack, -1, -1, 38) - ft_strlen(items[i - 2]->name));
			ft_putnbr(items[i - 2]->attack);
			write_msg(" ATK |\n");
		}
		i++;
	}
	i = 2;
	write_msg("|   armors :                                 |\n");
	while (i < NB_ITEMS + 2)
	{
		if (inventory[i] > 0 && items[i - 2]->type > 1)
		{
			if (items[i - 2]->equiped == 0)
				write_msg("| ");
			else
				write_msg("|>");
			write_msg(items[i - 2]->name);
			write(1, "                                        ", hud_offset(items[i - 2]->defense, -1, -1, 38) - ft_strlen(items[i - 2]->name));
			ft_putnbr(items[i - 2]->defense);
			write_msg(" DEF |\n");
		}
		i++;
	}
	write_msg("----------------------------------------------\n");
}
