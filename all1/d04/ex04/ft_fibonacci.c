/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:57:28 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/06 19:33:22 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_fibonacci(int index)
{
	if (index <0)
	{return (-1);}
	if (index==0) return 0 ;
	if (index==1) return 1;
	return ft_fibonacci(index-1)+ft_fibonacci(index-2);
}
 int main()
{
printf("%d", ft_fibonacci(6));
}
