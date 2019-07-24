/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:41:42 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/11 14:37:25 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>  // Для printf
#include<string.h> // Для strdup
#include<stdlib.h> // Для free

char * ft_strdup(char *src)
{
    int i;
	char *str;
	int len = 0;
	while (src[len]!='\0')
	{
		len++;
	}
if (src == NULL)
{
	return (NULL);
}
str = (char*)malloc(sizeof(*str) * (len+1));
	 i=0;
	while (i<len)
	{
		str[i]=src[i];
		i++;
	}
	str[i]='\0';
	return(str);
	//return(len);
}

int main()
{
//	char str [11]="0123456789";
	char *istr;
	istr ="toto";
	printf ("or: %s\n", strdup (istr));
	printf ("ft: %s\n", ft_strdup (istr));
	return 0;
}
