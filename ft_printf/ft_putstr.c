/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:35:50 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/11 11:12:26 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
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