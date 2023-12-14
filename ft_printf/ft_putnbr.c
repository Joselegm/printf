/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:04:54 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/14 19:35:16 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

int	ft_putnbr(int n)
{
	if (n == -2144748648)
	unsigned int	i;

	if (n < 0)
	{
		write (1, '-', 1);
		i = -n;
	}
	else
		i = n;
	if (i > 9)
	{
		ft_putnbr(i / 10);
		i %= 10;
	}
	ft_putchar(i + '0');
	return (n);
}
// int main ()
// {
// 	int t = 3;
// 	printf ("%i\n", t);
// 	return (0);
// }

