/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexapt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselegm <joselegm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:18:13 by jose-lui          #+#    #+#             */
/*   Updated: 2023/12/11 21:19:52 by joselegm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

int	ft_putexapt(char *nex, unsigned long dec, int s)
{
    unsigned long   c;

    c = ft_strlen(nex);
if (dec >= c)
{
    s = ft_putexapt (nex, dec / c, s);
    s %= c;
}
    
}