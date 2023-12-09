/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:16:58 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/09 14:34:43 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
// int main()
// {
// 	char	*c = "cuarenta y dos";
// 	int		p = ft_strlen(c);
// 	printf ("%i\n", p);
// 	write (1, "\n", 1);
// 	return (0);
// }
