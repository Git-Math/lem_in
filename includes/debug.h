/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:20:20 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 13:20:24 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H
# define INT	1
# define CHAR	2
# include "lem_in.h"

/*
** debug_1.c
*/

void		debug_lemin(t_lemin *lemin);
void		print_type(char *str, void *data, int type);
void		debug_nod(t_nod *nod);
void		print_hashtab(t_list **hashtab);
void		debug_links(t_nod *nod);

/*
** debug_2.c
*/

void		print_list_nod(t_list *list);
void		print_firstsp(t_listsp *sp);
void		print_jam(t_jam *jam, int size);
void		print_jams(t_jam *jam);

/*
** debug_3.c
*/

void		print_list(t_list *list);

#endif
