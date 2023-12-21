/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexapt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:18:13 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/21 18:25:23 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putexapt(unsigned long long dec, char *nex, int *c)
{
	if (*c == -1)
		return ;
	if (dec >= 16)
	{
		ft_putexapt (dec / 16, nex, c);
		ft_putexapt (dec % 16, nex, c);
	}
	else
		ft_putchar (nex[dec], c);
}
