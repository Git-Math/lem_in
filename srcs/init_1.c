/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:29:04 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 13:29:06 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static void	new_hashtab(t_lemin *lemin)
{
	int	i;

	i = 0;
	if (!lemin)
		error();
	lemin->hashtab = (t_list**)malloc(sizeof(t_list*) * MOD_SIZE);
	while (i < MOD_SIZE)
		lemin->hashtab[i++] = NULL;
}

t_lemin		*init_lemin(t_lemin *lemin)
{
	if (!lemin)
	{
		if (!(lemin = (t_lemin*)malloc(sizeof(t_lemin))))
			error();
	}
	lemin->ant_nbr = 0;
	lemin->room_nbr = 0;
	lemin->end_name = NULL;
	lemin->start = NULL;
	lemin->end = NULL;
	lemin->props = -1;
	lemin->path_len = 0;
	lemin->path_nbr = 0;
	lemin->len_tmp = 0;
	lemin->chemin = NULL;
	lemin->set = NULL;
	lemin->jam = NULL;
	lemin->comb = NULL;
	lemin->sp_tmp = NULL;
	lemin->size = INT_MAX;
	lemin->data_type = ANTS_NBR;
	new_hashtab(lemin);
	return (lemin);
}
