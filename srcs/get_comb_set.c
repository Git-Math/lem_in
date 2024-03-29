/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_comb_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:27:28 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 13:27:30 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_listsp		*new_listsp_from_listsp(t_listsp **sp, t_listsp *listsp)
{
	t_listsp	*sp_tmp;

	if (!(sp_tmp = (t_listsp*)malloc(sizeof(t_listsp))))
		error();
	sp_tmp->list = (listsp) ? listsp->list : NULL;
	sp_tmp->path_len = (listsp) ? listsp->path_len : 0;
	sp_tmp->a = (listsp) ? listsp->a : 0;
	sp_tmp->next = NULL;
	if (sp)
		*sp = sp_tmp;
	return (sp_tmp);
}

static void		init_comb_from_list(t_jam **comb, t_listsp *sp)
{
	t_jam	*j_tmp;

	if (!comb)
		error();
	j_tmp = *comb;
	if (!*comb)
	{
		if (!(*comb = (t_jam*)malloc(sizeof(t_jam))))
			error();
		j_tmp = *comb;
	}
	new_listsp_from_listsp(&(j_tmp->pathsp), sp);
	j_tmp->nod = NULL;
	j_tmp->next = NULL;
}

static void		delete_comb_tmp(t_jam **comb_tmp)
{
	t_listsp	*sp_tmp;
	t_listsp	*sp;

	if (comb_tmp && *comb_tmp)
	{
		sp = (*comb_tmp)->pathsp;
		sp_tmp = sp;
		while (sp_tmp)
		{
			free(sp_tmp);
			sp_tmp = sp_tmp->next;
		}
		free(*comb_tmp);
		*comb_tmp = NULL;
	}
}

void			get_final_pathsp(t_lemin *lemin, t_jam *comb_tmp)
{
	int			ret;
	t_listsp	*tmp;

	ret = 0;
	tmp = copy_comb_tmp_sp(comb_tmp);
	if (!lemin->sp_tmp)
	{
		sort(&(tmp));
		lemin->size = calc(tmp, lemin->ant_nbr);
		lemin->sp_tmp = copy_tmp_sp(tmp);
	}
	else
	{
		if (check_comb(comb_tmp->pathsp))
		{
			sort(&(tmp));
			if ((ret = calc(tmp, lemin->ant_nbr)) < lemin->size)
			{
				lemin->size = ret;
				remove_sp(lemin->sp_tmp);
				lemin->sp_tmp = copy_tmp_sp(tmp);
			}
		}
	}
	remove_sp(tmp);
}

int				get_comb_set(t_lemin *lemin)
{
	t_jam		*j_tmp;
	t_jam		*comb_tmp;
	t_listsp	*sp_tmp;

	comb_tmp = NULL;
	if (!lemin)
		error();
	if (!(j_tmp = lemin->jam))
		error();
	while (j_tmp)
	{
		sp_tmp = j_tmp->pathsp;
		while (sp_tmp)
		{
			init_comb_from_list(&comb_tmp, sp_tmp);
			get_final_pathsp(lemin, comb_tmp);
			if (j_tmp->next)
				combine(comb_tmp, j_tmp->next,
							j_tmp->next->pathsp, lemin);
			sp_tmp = sp_tmp->next;
			delete_comb_tmp(&comb_tmp);
		}
		j_tmp = j_tmp->next;
	}
	return (0);
}
