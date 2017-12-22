#include "engine.h"

t_char		*init_warrior(char *name)
{
	t_char	*baeth;

	if (!(baeth = (t_char *)malloc(sizeof(t_char))))
		return (NULL);
	baeth->name = name;
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
	baeth->attributes = 0;
	if (!(baeth->stuff = (t_item **)malloc(sizeof(t_item *) * 7)))
		return (NULL);
	baeth->stuff[0] = NULL;
	baeth->stuff[1] = NULL;
	baeth->stuff[2] = NULL;
	baeth->stuff[3] = NULL;
	baeth->stuff[4] = NULL;
	baeth->stuff[5] = NULL;
	baeth->stuff[6] = NULL;
	return (baeth);
}

t_char		*init_baeth(char *name)
{
	t_char	*baeth;

	if (!(baeth = (t_char *)malloc(sizeof(t_char))))
		return (NULL);
	baeth->name = name;
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
	baeth->attributes = 0;
	if (!(baeth->stuff = (t_item **)malloc(sizeof(t_item *) * 7)))
		return (NULL);
	baeth->stuff[0] = NULL;
	baeth->stuff[1] = NULL;
	baeth->stuff[2] = NULL;
	baeth->stuff[3] = NULL;
	baeth->stuff[4] = NULL;
	baeth->stuff[5] = NULL;
	baeth->stuff[6] = NULL;
	return (baeth);
}

t_char		*choose_character(void)
{
	t_char	*player;
	char	*input;
	char	*name;
	char	*classes[2];
	int		levier;
	int		sure;

	levier = 0;
	sure = 0;
	classes[0] = "baeth";
	classes[1] = "warrior";
	while (sure == 0)
	{
		write_msg("What's your name ?\n : ");
		name = get_name();
		write_msg("Are you sure ? (yes/no)\n : ");
		input = get_name();
		if (ft_strcmp(ft_strlowcase(input), "yes") == 0)
			sure = 1;
	}
	write_msg("                Choose your Fighter\n  -Baeth\n  -Warrior\n");
	while (levier == 0)
	{
		write_msg(" : ");
		input = ft_strlowcase(get_name());
		if (ft_strcmp(input, "baeth") == 0)
		{
			player = init_baeth(name);
			levier = 1;
		}
		else if (ft_strcmp(input, "warrior") == 0)
		{
			player = init_warrior(name);
			levier = 1;
		}
		else
			write_msg("Your input is invalid\n");
	}
	return (player);
}
