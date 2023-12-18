/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:33:11 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/18 18:20:46 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

void	ft_unsigned(unsigned int n, int *c)
{
	if (n < 0)
		return ;

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
