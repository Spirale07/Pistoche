/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 08:39:04 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/07 11:48:54 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include<unistd.h>

int		ft_putchar(char a)
{
	write(1, &a, 1);
	return(0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main()
{
		int a = 1;
		ft_ft(&a);
		printf("%d", a);
		return(0);
}
