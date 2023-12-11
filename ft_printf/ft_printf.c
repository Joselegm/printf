/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:53:15 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/11 14:06:09 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(char const *str, ...)
{
	va_list	type_args;
	int		add;

	add = 0;
	va_start (type_args, str);
	while (str[add] != '\0')
	{
		if (str[add] == '%')
		{
			type_var (str[add + 1], type_args);
			add++;
		}
		else
			ft_putchar (str[add]);
		add++;
	}
	va_end (type_args);
	return (add);
}

static int	type_var(char c, va_list type_args)
{
	if (c == 'c')
		ft_putchar (va_arg(type_args, int));
	if (c == 's')
		ft_putstr (va_arg(type_args, char *));
	if (c == 'p')

	if (c == 'd'||c == 'i')
		ft_putnbr (va_arg(type_args, int));
	if (c == 'u')
		ft_unsigned (va_arg(type_args, unsigned int));
	if (c == 'x')
	if (c == 'X')
	if (c == '%')
		ft_putchar ('%');
}