/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:58:35 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/16 15:17:20 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{ write (1, &c, 1);}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_putnbr_print(int nb, long div, int exeption)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (div == 1)
		ft_putchar('0');
	else
	{
		while (div > 1)
		{
			div = div / 10;
			ft_putchar(nb / div + '0');
			nb = nb % div;
		}
	}
	if (exeption)
		ft_putchar('8');
}

void ft_putnbr(int nb)
{
	int temp;
	long div;
	int exeption;

	div = 1;
	exeption = 0;
	temp = nb;
	if (nb == -2147483648)
	{
		nb = nb / 10;
		temp = temp / 10;
		exeption = 1;
	}
	while (temp)
	{
		temp = temp / 10;
		div = div * 10;
	}
	ft_putnbr_print(nb, div, exeption);
}

