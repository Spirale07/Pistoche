/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:34:40 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/14 16:45:13 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char**argv)
{
	int a;

	a = argc;
	if (a > 1)
	{
		while (argv[a] != '\0')
		{
			ft_putstr(argv[a]);
			ft_putchar('\n');
			a--;
		}
	}
	return (0);
}
