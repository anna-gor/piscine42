/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:07:33 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/15 15:45:48 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void f(int i)
{
	printf("%d\n", i);
}
void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i = 0;
	while (i<length)
	{
		(f)(tab[i]);
		i++;
	}
}

int main()
{
	int tab [10];
	for (int i=0; i<10; i++)
	{tab[i]=i;}
	ft_foreach(tab,10 , &f);
}
