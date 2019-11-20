/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:06:08 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 14:06:10 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(*ptr) * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size);
	return ((void*)ptr);
}
