/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:53:15 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/09 16:45:45 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(char const *s, ...)
{
	va_list	type_args;
	int		add;

	va_start (type_args, s);
}

static int	type_var(char c, va_list type_args)
{
	if (c == 'c')
		ft_putchar (va_arg(type_args, int));
	if (c == 's')
		ft_putstr (va_arg(type_args, char *));
	if (c == 'p')
	if (c == 'd' || c == 'i')
		ft_putnbr (va_arg(type_args, int));
	if (c == 'u')
	if (c == 'x')
	if (c == 'X')
	if (c == '%')
		ft_putchar ('%');
}