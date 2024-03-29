/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:05:41 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 14:05:43 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_atoi(const char *str)
{
	const char	*tmp;
	int			nbr;
	int			sign;

	sign = 1;
	tmp = str;
	while ((*tmp == '\n' || *tmp == '\v' || *tmp == '\t')
			|| (*tmp == '\f' || *tmp == ' ' || *tmp == '\r' || *tmp == '+'))
		tmp++;
	if (*tmp == '-')
	{
		sign = 0;
		tmp++;
	}
	nbr = 0;
	while (*tmp && ft_isdigit(*tmp))
	{
		nbr = nbr * 10 + (*tmp - '0');
		tmp++;
	}
	if (!sign)
		return (nbr * -1);
	return (nbr);
}
