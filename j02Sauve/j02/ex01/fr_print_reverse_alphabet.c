/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 10:37:37 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/06 10:56:42 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void 	ft_print_reverse_alphabet(void)
{
	int i;

	i = 122;
	while (i >= 97)
			{
					ft_putchar(i);
					i = i - 1;
			}		

}

int		main()
{
		ft_print_reverse_alphabet();
		return(0);

}
