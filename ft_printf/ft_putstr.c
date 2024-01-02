/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:35:50 by jose-lui          #+#    #+#             */
/*   Updated: 2024/01/02 17:45:01 by jose-lui         ###   ########.fr       */
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
		// write (1, "(null)", 6);
		// *c = 6;
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

// int main()
// {
// 	char *f = "hola mundo";
// 	int c = 0;
// 	ft_putstr (f);
// 	//write (1, &c, 20);
// 	write (1, "\n", 1);
// 	return (0);
// }