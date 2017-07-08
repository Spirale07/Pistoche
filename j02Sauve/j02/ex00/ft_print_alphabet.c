/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:16:11 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/06 13:45:59 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void 	ft_print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
		{
			ft_putchar(i);
			i = i + 1;
		}	
}

int		main()
{
		ft_print_alphabet();
		return (0);
}
