/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:08:24 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 14:08:25 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t size)
{
	char	*new_str;
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char*)s;
	new_str = ft_strnew(size);
	if (!new_str)
		return (NULL);
	while (i < size && *tmp)
	{
		new_str[i] = tmp[start];
		i++;
		start++;
	}
	return (new_str);
}
