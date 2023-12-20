/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:53:15 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/19 20:20:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

void	type_var(char c, va_list type_args, int *add)
{
	if (c == 'c')
		ft_putchar (va_arg(type_args, int), add);
	else if (c == 's')
		ft_putstr (va_arg(type_args, char *), add);
	else if (c == 'p')
		ft_putexapt (va_arg(type_args, unsigned int), "0123456789abcdef", add);
	else if (c == 'd' || c == 'i')
		ft_putnbr (va_arg(type_args, int), add);
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
	int		ct;

	add = 0;
	ct = 0;
	va_start (type_args, str);
	while (str[add] != '\0')
	{
		if (str[add] == '%')
		{
			type_var (str[add + 1], type_args, &ct);
			add++;
		}
		else
			ft_putchar (str[add], &ct);
		add++;
	}
	va_end (type_args);
	return (ct);
}
 int main ()
{
	char character = 'y';
	// char str[] = "Prueba print str";
	// int nbr = -16;
	// int dec = -123456789;
	// int ent =123456789;
	// unsigned int prueba_u = -131313;
	// int prueba_x = -17;
	// int prueba_X = 61;
	// char prueba_percent = '%';
	
	ft_printf (": %u\n", ft_printf("%c", character));
	// ft_printf (": %u\n", ft_printf("%s", str));
	// ft_printf (": %u\n", ft_printf("%p", nbr));
	// ft_printf (": %u\n", ft_printf("%d", dec));
	// ft_printf (": %u\n", ft_printf("%i", ent));
	// ft_printf (": %u\n", ft_printf("%u", prueba_u));
	// ft_printf (": %u\n", ft_printf("%x", prueba_x));
	// ft_printf (": %u\n", ft_printf("%X", prueba_X));
	// ft_printf (": %u\n", ft_printf("%%", prueba_percent));
	return (0);
}

