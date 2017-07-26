/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 08:58:47 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/25 22:12:48 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int		calc(int a, int b, char c)
{
	if (c == '+')
		return (a + b);
	else if (c == '-')
		return (a - b);
	else if (c == '*')
		return (a * b);
	else if (c == '/')
		return (a / b);
	else if (c == '%')
		return (a % b);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int ya;

	if (argc == 4)
	{
		if ((ft_atoi(argv[3]) == 0 && argv[2][0] == '/') || (ft_atoi(argv[3])
					== 0 && argv[2][0] == '%'))
		{
			if (argv[2][0] == '/')
			{
				write(1, "Stop : division by zero\n", 24);
				return (0);
			}
			else
			{
				write(1, "Stop : modulo by zero\n", 22);
				return (0);
			}
		}
		ya = calc(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]);
		ft_putnbr(ya);
		ft_putchar('\n');
	}
	return (0);
}
