/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:57:27 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/15 17:21:32 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int f(char *str)
{
	int i=0;
	while (str[i]!='\0')
	{
		if(str[i]=='a') return (1);
		else
			   i++;
		return(0);
	}


}

int ft_any(char **tab, int(*f)(char*))
{
	int count =0;
	int i=0;
	while (tab[i] != 0)
	{
		if(f(tab[i])==1) count++;
		else
			i++;
	}
	return count;
}

int main()
{
	char *arr[]={"asd", "5rat", "rgaerg", 0};


	printf("%d\n",ft_any(arr, &f));

	return(0);

}

