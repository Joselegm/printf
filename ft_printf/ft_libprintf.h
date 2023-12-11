/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libprintf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:21:45 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/11 14:03:08 by jose-lui         ###   ########.fr       */
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

#endif

