/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libprintf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselegm <joselegm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:21:45 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/11 21:19:23 by joselegm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBPRINTF_H
# define FT_LIBPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include "ft_libprintf.h"

size_t			ft_strlen(const char *s);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
int				ft_putchar(int c);
unsigned int	ft_unsigned(unsigned int c);
int				ft_printf(char const *str, ...);
int	            ft_putexapt(char *nex, unsigned long, int s);
#endif

