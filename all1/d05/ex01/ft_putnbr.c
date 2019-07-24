/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:30:23 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/08 16:20:11 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void ft_putnbr(int nb)
{
		int k=1;
		if (nb<0)
		{
			ft_putchar('-');nb=-nb;
		}
		int t=absolute(nb);
		while (t)
		{
			t=t/10; k=k*10;
		}
		k=k/10;
		
		while (nb)
		{
			//int c=nb/k;
			//int f=0;
			//if((c!=0) || (f!=0)){
			ft_putchar(nb/k + '0');
			nb=nb - nb/k*k;
			k=k/10;
			//f=1;}
		}
}

int main()
{
	    ft_putnbr(-8);

		    return 0;
}
