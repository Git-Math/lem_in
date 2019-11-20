/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:28:52 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 13:28:54 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

static void		reduce(unsigned long *hash)
{
	*hash = *hash % MOD_SIZE;
}

unsigned long	hash1(char *str)
{
	unsigned long	hash;
	int				c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	if (hash > MOD_SIZE)
		reduce(&hash);
	return (hash);
}

unsigned long	hash2(char *str)
{
	unsigned long	hash;
	int				c;

	hash = 0;
	while ((c = *str++))
		hash = c + (hash << 6) + (hash << 16) - hash;
	if (hash > MOD_SIZE)
		reduce(&hash);
	return (hash);
}

unsigned long	hash3(char *str)
{
	unsigned long	hash;
	int				c;

	hash = 0;
	while ((c = *str++))
		hash += c;
	if (hash >= MOD_SIZE)
		reduce(&hash);
	return (hash);
}
