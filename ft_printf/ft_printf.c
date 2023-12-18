/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:53:15 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/18 10:07:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

static int	type_var(char c, va_list type_args, int *add)
{
	if (c == 'c')
		ft_putchar (va_arg(type_args, int), add);
	else if (c == 's')
		ft_putstr (va_arg(type_args, char *), add);
	else if (c == 'p')
		ft_putexapt (va_arg(type_args, unsigned int), "0123456789abcdef", add);
	else if (c == 'd'||c == 'i')
		ft_putnbr (va_arg(type_args, int), int count);
	else if (c == 'u')
		ft_unsigned (va_arg(type_args, unsigned int), add);
	else if (c == 'x')
		ft_putexapt (va_arg(type_args, unsigned int), "0123456789abcdef", add);
	else if (c == 'X')
		ft_putexapt (va_arg(type_args, unsigned int), "0123456789ABCDEF", add);
	else if (c == '%')
		ft_putchar ('%', add);
}

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
			type_var (str[add + 1], type_args, &add);
			add++;
		}
		else
			ft_putchar (str[add], &add);
		add++;
	}
	va_end (type_args);
	return (add);
}
