/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:04:54 by jose-lui          #+#    #+#             */
/*   Updated: 2024/01/02 17:30:06 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *c)
{
	if (n == -2147483648)
	{
		if (write (1, "-2147483648", 11) != -1)
			(*c) += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar ('-', c);
		ft_putnbr (n * -1, c);
	}
	else
	{
		if (n > 9)
			ft_putnbr (n / 10, c);
		if (*c != -1)
			ft_putchar(n % 10 + '0', c);
	}
}
// int main ()
// {
// 	int t = 3;
// 	printf ("%i\n", t);
// 	return (0);
// }
