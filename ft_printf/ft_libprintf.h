/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libprintf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:21:45 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/18 18:11:39 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBPRINTF_H
# define FT_LIBPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>

int				ft_printf(char const *str, ...);
void			ft_putchar(int c, int *count);
void			ft_putstr(char *s, int *c);
void			ft_putexapt(unsigned long dec, char *nex, int *c);
void			ft_putnbr(int n, int *c);
void			ft_unsigned(unsigned int n, int *c);
#endif
