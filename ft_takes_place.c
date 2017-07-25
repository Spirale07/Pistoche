/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:57:35 by tlaberro          #+#    #+#             */
/*   Updated: 2017/07/14 02:53:07 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		last_hour;
	char	*str;

	str = "THE FOLLOWING TAKES PLACE BETWEEN";
	last_hour = hour + 1;
	if (hour == 0 || hour == 24)
		printf("%s 12.00 A.M. AND 1.00 A.M.\n\n", str);
	if (hour == 23)
		printf("%s 11.00 P.M. AND 12.00 A.M.\n\n", str);
	if (hour == 11)
		printf("%s 11.00 A.M. AND 12.00 P.M.\n\n", str);
	if (hour == 12)
		printf("%s 12.00 P.M. AND 1.00 A.M.\n\n", str);
	if (hour >= 1 && hour <= 10)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n\n", str, hour, last_hour);
	if (hour >= 13 && hour <= 22)
		printf("%s %d.00 P.M. AND %d.00 P.M.\n\n"
				, str, hour - 12, last_hour - 12);
}
