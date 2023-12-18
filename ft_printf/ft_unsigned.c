/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:33:11 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/15 12:21:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

void	ft_unsigned(unsigned int n, int *c)
{
	if (n < 0)
		return (-1);

	if (n > 9)
	{
		ft_unsigned (n / 10, c);
		n %= 10;
	}
	else
	{
		ft_putchar (n + '0', c);
	}
}
