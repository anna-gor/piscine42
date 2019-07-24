/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 16:23:14 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/06 16:23:29 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int i=nb;
	if ((nb<0) || (nb>12))
	{
		return(0);
	}
	else if (nb==0)
	{
		return(1);
	}
	else {
		while (i!=1)
		{
			i=i-1;
			nb=nb*i;
			
		}
		return(nb);
	}

}

int main()
{
	int res =ft_iterative_factorial(12);
	printf ("%d",res);
	return (0);
}
