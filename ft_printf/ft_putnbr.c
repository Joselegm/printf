/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:04:54 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/18 18:17:59 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

void	ft_putnbr(int n, int *c)
{
	if (n == -2147483648)
	{
		if (write (1, "-2147483648", 11))
			(*c) += 11;

	}

	if (n < 0)
	{
		ft_putchar ('-', c);
		ft_putnbr (n * -1, c);
	}
	else
		if (n > 9)
		{
			ft_putnbr (n / 10, c);
			n %= 10;
			ft_putchar(n + '0', c);
		}
}
// int main ()
// {
// 	int t = 3;
// 	printf ("%i\n", t);
// 	return (0);
// }

