#include "engine/engine.h"

int		main(int argc, char **argv)
{
	t_char	*player;
	t_usable	*hp_potion;
	t_usable	*mp_potion;

	player = init_baeth();
	hp_potion = gen_usable("hp potion", 50, 0, 10);
	mp_potion = gen_usable("mp potion", 0, 50, 10);
	player->name = "test";
	hud_inventory(*player);
	return (0);
}
