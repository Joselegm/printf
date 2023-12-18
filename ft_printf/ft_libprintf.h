/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libprintf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:21:45 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/15 13:10:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBPRINTF_H
# define FT_LIBPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>

size_t			ft_strlen(const char *s);
void			ft_putnbr(int n, int *c);
void			ft_putstr(char *s, int *c);
void			ft_putchar(int c, int *count);
void            ft_unsigned(unsigned int n, int *c);
int				ft_printf(char const *str, ...);
void			ft_putexapt(unsigned long dec, char *nex, int *c);
#endif
