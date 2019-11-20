/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:20:06 by mnguyen           #+#    #+#             */
/*   Updated: 2015/10/31 13:20:12 by mnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_ERRORS_H
# define CHECK_ERRORS_H

# define ERR			ft_putstr("Error : ")
# define ERR_VAR(var)	ft_putstr(var)
# define ERR_SP			ft_putstr(" :: ")
# define ERR_FILE(file)	ft_putstr(file)

# define ERR_MALLOC		ft_putendl("malloc")
# define ERR_NULL		ft_putendl("set to NULL")
# define ERR_READ		ft_putendl("cant read")

typedef void	(*t_ferr)(void);

enum	e_code
{
	MALLOC,
	NUL,
	READ
};

/*
** fun_err_01.c
*/

void				f_malloc(void);
void				f_nul(void);
void				f_read(void);

/*
** check_errors.c
*/

void				check_errors(int code, char *file_name, char *var_name);
void				error(void);
#endif
