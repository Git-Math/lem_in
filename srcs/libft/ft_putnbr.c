/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:06:55 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 14:06:56 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "lib.h"

static void	ft_put_aux_nbr(int n)
{
	if (n >= 10)
	{
		ft_put_aux_nbr(n / 10);
		ft_put_aux_nbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void		ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_put_aux_nbr(n * -1);
	}
	else
		ft_put_aux_nbr(n);
}
