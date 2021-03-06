/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 17:35:38 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/24 17:37:41 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < -9)
	{
		ft_putchar('-');
		ft_putnbr(nb / 10 * -1);
		ft_putnbr(nb % 10 * -1);
	}
	else if (nb >= -9 && nb < 0)
	{
		nb = nb * 1;
		ft_putchar('-');
		ft_putchar(nb + '0');
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
