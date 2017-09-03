#ifndef ENGINE_H
# define ENGINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

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
}					t_char;

typedef struct		s_item
{
	char			*name;
	int				type;
	int				attack;
	int				defense;
	int				price;
}					t_item;

typedef struct		s_usable
{
	char			*name;
	int				hp;
	int				mp;
	int				price;
}					t_usable;

void		write_msg(char *msg);
int			ft_strlen(char *str);
char		*get_input(void);
int			ft_strcmp(char *s1, char *s2);
char		*ft_strlowcase(char *str);
int			check_input(char *str, char **tab, int size);
void		ft_putnbr(int nb);
void		ft_putchar(char c);
t_char		*init_baeth();
int			random_int(int min, int max);
void		hud_normal(t_char player);
void		hud_inventory(t_char player);
char		*ft_itoa(int nb);
t_usable	*gen_usable(char *name, int hp, int mp, int price);

#endif
