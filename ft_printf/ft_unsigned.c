/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:33:11 by jose-lui          #+#    #+#             */
/*   Updated: 2024/01/02 17:08:08 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned(unsigned int n, int *c)
{
	if (*c < 0)
		return ;
	if (n >= 10)
	{
		ft_unsigned (n / 10, c);
		ft_unsigned (n % 10, c);
	}
	else
	{
		ft_putchar (n + '0', c);
	}
}
