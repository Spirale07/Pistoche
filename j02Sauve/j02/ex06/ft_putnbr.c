/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:35:37 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/08 15:35:24 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void	ft_putnbr(int nb)
{
	int a;
	int b;

	a = nb / 10;
	b = nb % 10;
	while(a > 0)
	{
		ft_putchar(a);
		ft_putnbr(nb);
	}
}

int		main()
{
	ft_putnbr(42);
	return(0);
}
