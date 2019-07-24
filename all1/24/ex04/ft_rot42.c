/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 20:16:57 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/11 21:19:43 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
char *ft_rot42(char *str)
{
	int i = 0;
	while (str[i]!='\0')
	{
		if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i] <='Z'))
		{
			str[i]=((str[i])+21)%24;
		}
		i++;
	}
	return (str);
}

int main()
{
	char *str;
	str = "asdr";
	printf("%s", ft_rot42(str));
			return (0);
}
