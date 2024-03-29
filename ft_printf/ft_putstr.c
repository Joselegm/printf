/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:35:50 by jose-lui          #+#    #+#             */
/*   Updated: 2024/01/16 17:59:33 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *c)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr ("(null)", c);
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar (s[i], c);
		if (*c == -1)
			return ;
		i++;
	}
}
