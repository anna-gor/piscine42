/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:22:42 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/11 22:50:37 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (factory)
	{
		while (factory[i])
		{
			while (factory[i][j])
			{
				free(factory[i][j]);
				j++;
			}
			i++;
			free[i];
		}
		free(factory);
	}
}
