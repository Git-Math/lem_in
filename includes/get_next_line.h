/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:20:38 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 14:03:23 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define MY_EOF -1
# define BUFF_SIZE 1

int		get_next_line(int const fd, char **line);
enum	e_str
{
	TMP,
	STR,
	BUFF
};
#endif
