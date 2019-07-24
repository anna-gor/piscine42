/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:08:04 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/15 20:15:19 by huhobert         ###   ########.fr       */
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
	}
return(0);
}

int ft_any(char **tab, int(*f)(char*))
{
int i=0;
while (tab[i] !=0)
{
	if(f(tab[i])==1) return 1;
	else
		i++;
}
return 0;
}

int main()
{
	char *arr[]={"sd", "5riat", "rgerg", "0"};


printf("%d\n",ft_any(arr, &f));

return(0);

}
