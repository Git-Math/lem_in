/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:29:45 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 13:29:46 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		ft_dashstrlen(char *str)
{
	int		i;

	i = 0;
	if (str)
	{
		while (*(str + i) && *(str + i) != '-')
			i++;
	}
	return (i);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (str)
	{
		while (*(str + i))
			i++;
	}
	return (i);
}
