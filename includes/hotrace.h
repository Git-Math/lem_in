/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:20:51 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 13:20:54 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H
# define MOD_SIZE 1024

enum	e_hash_size
{
	h1_size = 5500000000000,
	h2_size = 100000,
	h3_size = 10000
};

unsigned long		hash1(char *str);
unsigned long		hash2(char *str);
unsigned long		hash3(char *str);
#endif
