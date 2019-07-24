/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:38:01 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/11 15:17:18 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>  // Для printf
#include<string.h> // Для strdup
#include<stdlib.h> // Для free

char *ft_strcat(char *dest,char *src, int ind, int argc)
{
	int i;
	int j;

	i=0;
	while (dest[i]!='\0')
	{
		i++;
	}
	j=0;
	while (src[j]!='\0')
	{
		dest[i+j]=src[j];
		j++;
	}
	if(ind!= argc-2)
	{dest[i+j]='\n';}
	dest[i+j+1]='\0';
	return (dest);
}
void uv(int count, int j)
{
	count++;
	j++;
}
char *ft_concat_params(int argc, char **argv)
{
	char *str;
	
	int i = 0;
	int j;
	int count =0;
	while(i<argc)
	{
		j=0;
		while (argv[i][j]!='\0')
		{
			//count++;
			//j++;
			uv(count,j);
		}
		//i++;
		//count++;
		uv(count,i);
	}

	str = (char*)malloc(sizeof(*str)*count);
	i=0;
	while(i<argc-1)
	{
		str =ft_strcat(str,argv[i+1], i, argc);
		i++;
	}
return(str);			
}

int main(int argc, char **argv)
{
	printf("%s<<end\n",ft_concat_params(argc, argv));
	printf("%d\n",argc);
	return(0);
}
