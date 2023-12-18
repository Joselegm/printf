/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:35:50 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/18 11:18:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

void	ft_putstr(char *s, int *c)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
		*c = i;
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