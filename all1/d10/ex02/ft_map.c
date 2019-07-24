/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:48:04 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/15 16:21:21 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<stdlib.h>
int f(int i)
{
	if (i>=0) return (1);
	else return (-1);
}

int *ft_map(int *tab, int length, int(*f)(int))
{
	int *a;
	a=(int*)malloc(sizeof(int)*length);
	int i = 0;
	if (length==0) return (NULL);
	while (i<length)
	{
	a[i]=f(tab[i]);
	i++;
	}
	return (a);
}

int main()
{
	int tab [10];
	for (int i=0; i<10; i++)
	{tab[i]=-6+i;}
	int *new;
	new = ft_map(tab,10 , &f);
	for (int i=0; i<10; i++)
		      {printf("%d\n", new[i]);}
}

