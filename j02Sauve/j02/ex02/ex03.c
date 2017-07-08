/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 11:40:12 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/06 11:59:05 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		ft_putchar(i);
		i = i + 1;
	}
}

int		main()
{
	ft_print_numbers();
	return (0);
}
