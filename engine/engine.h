#ifndef ENGINE_H
# define ENGINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	write_msg(char *msg);
int		ft_strlen(char *str);
char	*get_input(void);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strlowcase(char *str);
int		check_input(char *str, char **tab, int size);

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
	int				comp1;
	int				comp2;
	int				comp3;
}					t_char;

typedef struct		s_item
{
	char			*name;
	int				attack;
	int				defense;
}					t_item;

typedef struct		s_usable
{
	char			*name;
	int				hp;
	int				mp;
}					t_usable;

#endif
