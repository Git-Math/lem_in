/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:29:57 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 13:30:41 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"
#include "init.h"
#include "debug.h"

/*
** Nouvel algo:
*/

/*
** 1- Trouver tous les chemins possibles (par branche).
** 2- Trouver toutes les combinaisons de chemins possible.
** 3- Trouver les combinaisons de chemins non secant.
** ---- Trouver puis comparer le temps de chacunes des combinaisons trouvees.
** 4- Si aucune combinaison de chemin non secant n'est trouvee.
** ---- Traiter chacunes des combinaisons pour eliminer les chemins surperflus.
** ---- Trouver puis comparer le temps de chacunes des combinaisons trouvees.
*/

int		main(int ac, char **av)
{
	t_lemin		*lemin;

	(void)av;
	lemin = NULL;
	lemin = init_lemin(lemin);
	if (ac)
	{
		get_data(lemin);
		if (!lemin->start || !lemin->end)
			error();
		lemin->start->bool = TRUE;
		get_paths(lemin);
		ft_putendl("");
		get_comb_set(lemin);
		aff(lemin->sp_tmp, lemin->size);
	}
	return (EXIT_SUCCESS);
}
