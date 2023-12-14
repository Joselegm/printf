/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:55:25 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/14 19:19:28 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

void	ft_putchar(int c, int *count)
{
	write (1, &c, 1);

	*count = *count + 1;
}

// int main()
// {
// 	int	j;
// 	int cont = 0;

// 	j = 'c';
// 	printf ("%c\n", j);
// 	return (0);
// }
