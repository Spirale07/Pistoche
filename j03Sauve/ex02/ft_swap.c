/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:42:58 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/07 16:14:36 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb > 0)
	{
		ft_putchar('-');
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_swap(int *a, int *b)
{
	int guy;
	guy = 48;
	guy = *a;
	*b = *a;
	*b = guy;
}

int		main()
{
	int a;
	int b;
	a = 4;
	b = 8;
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
}
