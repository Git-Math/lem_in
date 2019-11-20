/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data_tools2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:28:34 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 13:28:36 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"
#include "debug.h"

t_nod		*if_match(char *str, t_list **hashtab, int nod)
{
	int		i;
	int		len;
	t_list	*tmp;
	t_nod	*n_tmp;

	len = 0;
	i = -1;
	n_tmp = NULL;
	if (hashtab)
	{
		while (++i < MOD_SIZE)
		{
			if (hashtab[i])
			{
				tmp = hashtab[i];
				if ((n_tmp = aux_if_match(tmp, str, &len, nod)))
					return (n_tmp);
			}
		}
	}
	return (NULL);
}

static void	nod_addaux(t_list *tmp, t_list *elem, t_nod *nod1, t_nod *nod2)
{
	int		i;

	tmp = nod1->links;
	while (tmp->next)
	{
		if (!(i = ft_strcmp(tmp->nod->name, nod2->name)))
			break ;
		tmp = tmp->next;
	}
	i = ft_strcmp(tmp->nod->name, nod2->name);
	if (i)
		tmp->next = elem;
}

void		nod_addelem(t_nod *nod1, t_nod *nod2)
{
	t_list	*tmp;
	t_list	*elem;

	tmp = NULL;
	if (!(elem = (t_list*)malloc(sizeof(t_list))))
		error();
	elem->nod = nod2;
	elem->next = NULL;
	if (!nod1->links)
	{
		nod1->links = elem;
		tmp = nod1->links;
	}
	else
		nod_addaux(tmp, elem, nod1, nod2);
}

void		add_link(t_nod *nod1, t_nod *nod2)
{
	if (nod1 && nod2)
	{
		nod_addelem(nod1, nod2);
		nod_addelem(nod2, nod1);
	}
	else
		error();
}

void		get_props(t_lemin *lemin, t_nod *nod)
{
	nod->props = lemin->props;
	if (lemin->props != -1)
	{
		if (lemin->props == START && lemin->start)
			error();
		if (lemin->props == END && lemin->end)
			error();
		if (lemin->props == START)
			lemin->start = nod;
		if (lemin->props == END)
			lemin->end = nod;
		lemin->props = -1;
	}
}
