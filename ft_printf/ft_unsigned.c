/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:33:11 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/11 14:01:26 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"


unsigned int	ft_unsigned(unsigned int c)
{
	int	sum;

	sum = 0;
	if (c < 0)
		return (-1);

	if (c > 9)
	{
		ft_unsigned (c / 10);
		c %= 10;
	}
	else
	{
		ft_putchar (c + '0');
		sum++;
	}
	return (sum);
}
