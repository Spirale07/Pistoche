/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:06:19 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/06 16:21:33 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char n)
{
	write(1, &n, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar(78);
	else
		ft_putchar(80);
}
int			main()
{
	ft_is_negative(82);
	return (0);
}
