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

void	hud_inventory(t_char player)
{
	write_msg("----------------------------------------------\n");
	write_msg("|                    Stats                   |\n");
	write_msg("|   attack : ");
	ft_putnbr(player.attack);
	write(1, "                                  ", hud_offset(player.attack, player.defense, -1, 19));
	write_msg("defense : ");
	ft_putnbr(player.defense);
	write_msg("   |\n");
	write_msg("|   HP : ");
	ft_putnbr(player.hp);
	write(1, "                                  ", hud_offset(player.hp, player.mp, -1, 28));
	write_msg("MP : ");
	ft_putnbr(player.mp);
	write_msg("   |\n");
	write_msg("----------------------------------------------\n");
}
