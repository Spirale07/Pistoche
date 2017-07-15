/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:30:55 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/15 21:22:39 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' || i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int		main()
{
	printf("%d", *ft_strncopy("fddlllllllllllll" , "kdddddsaw", 4));
	return(0);
}
