/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:50:57 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/11 17:55:56 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 1 && hour <= 10)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",
				hour, hour + 1);
	if (hour == 0 || hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	if (hour >= 13 && hour <= 22)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n",
				hour - 12, hour - 11);
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M.\n");
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
}
