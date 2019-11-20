/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:06:24 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 14:06:25 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmp_d;
	char	*tmp_s;

	tmp_s = (char*)src;
	tmp_d = (char*)dest;
	while (n)
	{
		*tmp_d = *tmp_s;
		tmp_s++;
		tmp_d++;
		n--;
	}
	return (dest);
}
