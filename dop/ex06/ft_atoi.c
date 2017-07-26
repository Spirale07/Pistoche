/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 17:31:30 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/25 23:07:31 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_exept(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f')
	{
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int kind;

	nb = 0;
	i = ft_exept(str);
	if (str[i] == '+' || str[i] == '-')
	{
		kind = str[i];
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	if (kind == '-')
	{
		nb = nb - nb * 2;
	}
	return (nb);
}
