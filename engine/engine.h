#ifndef ENGINE_H
# define ENGINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include "Libft/libft.h"

# define NB_ITEMS 6

typedef struct		s_item
{
	char			*name;
	int				type;
	int				attack;
	int				defense;
	int				price;
	int				id;
	int				equiped;
}					t_item;

typedef struct		s_usable
{
	char			*name;
	int				hp;
	int				mp;
	int				price;
}					t_usable;

typedef struct		s_char
{
	char			*name;
	int				lvl;
	int				xp;
	int				current_xp;
	int				max_hp;
	int				hp;
	int				max_mp;
	int				mp;
	int				attack;
	int				defense;
	int				magic;
	int				gold;
	int				comp1;
	int				comp2;
	int				comp3;
	int				attributes;
	t_item			**stuff;
}					t_char;

typedef struct		s_inv
{
	t_item			**items;
	t_usable		**usable_items;
	int				*backpack;
}					t_inv;

void		write_msg(char *msg);
char		*ft_strlowcase(char *str);
char		*get_input(t_char *player);
char		*get_name(void);
int			check_input(char *str, char **tab, int size);
t_char		*init_baeth(char *name);
int			random_int(int min, int max);
void		hud_normal(t_char player);
void		hud_inventory(t_char player, int *inventory, t_usable **usable_items, t_item **items);
t_usable	*gen_usable(char *name, int hp, int mp, int price);
t_item		**init_items(void);
t_usable	**init_usable(void);
void		sys_msg(char *str);
void		redirect_main(char *str, t_char *player, t_inv *inventory);
t_char		*choose_character(void);
t_inv		*init_inventory(t_item **items, t_usable **usable_items);
void		equip_stuff(t_char *player, t_inv *inventory);
int			stuff_atk(t_item **stuff);
int			stuff_def(t_item **stuff);

#endif
