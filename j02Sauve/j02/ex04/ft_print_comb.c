/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:08:07 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/07 01:26:32 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void affichage(int a,int b,int c)
{

	if(a < 7)
	{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	ft_putchar(44);
	ft_putchar(32);
	}
	else
	{
		ft_putchar(a + 48);
		ft_putchar(b + 48);
		ft_putchar(c + 48);
	}
	
}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a<= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				affichage(a, b, c);
				c++;
			}	
			b++;
		}
		a++;
	}
}

int		main()
{
	ft_print_comb();
	return(0);
}
