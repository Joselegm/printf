/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:53:15 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/09 18:55:14 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(char const *s, ...)
{
	va_list	type_args;
	int		add;

	add = 0;
	va_start (type_args, s);
	while (s[add] != '\0')
	{
		if (s[add] == '%')
			type_var (s[add + 1], type_args);
			add++;
		else
			ft_putchar (s[add]);
			add++;
	}
	va_end (type_args);
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