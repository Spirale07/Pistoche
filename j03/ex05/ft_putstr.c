/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 09:09:28 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/08 11:51:30 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(i =! '\0')
	{
		ft_putchar(i);
		i = i + 1;
	}
}

