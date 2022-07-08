#include "../header/so_long.h"

void move_up(t_game *game)
{
	int a;
	int i;

	a = 0;
	i = 0;
	while(game->map.tab[a])
	{
		while(game->map.tab[a][i] != '1')
		{
			if (game->map.tab[a][i] == 'P')
			{
				if (game->map.tab[a - 1][i] != '1')
				{
					game->map.tab[a - 1][i] = 'P';
					game->map.tab[a][i] = '0';
					return ;
				}
				else
					return ;
			}
			i++;
		}
		a++;
		i = 0;
	}
	a = 0;
	while(game->map.tab[a])
	{
		ft_printf("%s", game->map.tab[a]);
		a++;
	}
	return ;
}