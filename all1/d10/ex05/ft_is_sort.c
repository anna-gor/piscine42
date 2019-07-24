/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:22:25 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/15 18:50:02 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int f(int a, int b)
{
	if (a<b) return -1;
	if (a==b) return 0;
	if (a>b) return 1;
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i=0;
	//int count=0;
	//int count1=0;
	while (i<length-1)
	{
		if ( f(tab[i], tab[i+1])>0) return 0;
		else if (f(tab[i], tab[i+1])<=0) i++;
		i++;
	}
	return (1);
}

int main()
{
	int arr[5]={1,2,4,3,5};
	printf("%d\n",ft_is_sort(arr,5, &f));

}
