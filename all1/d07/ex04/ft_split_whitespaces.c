/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:31:33 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/11 18:07:26 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
void ft_putchar(char c)
{
	write (1, &c, 1);
}

int count(char *str)
{
	int i;
	int beg;
	int count;

	i = 0;
	beg = 0;
	count = 0;
	while ((str[i] == '\n' ||  str[i] == '\t' || str[i] == ' ') && str[i] != '\0')
	{
		i++;
	}
	beg=0;
	while (str[i] != '\0')
	{
		if ((str[i]!='\n' &&  str[i]!='\t' && str[i]!=' ')&& beg==0)
		{
			beg=1;
			count++;
		}
		else if (str[i]=='\n' ||  str[i]=='\t' || str[i]==' ')
			beg=0;
		i++;
	}
	return (count);
}

int length(char *str, int i)
{
	int length = 0;
	while (str[i]!=' ' && str[i]!='\n' && str[i]!='\t' &&  str[i]!='\0')
	{
	length++;
	i++;
	}
	return (length);
}
char **ft_split_whitespaces(char *str)
{
	char **q;
	int i;
	int j;
	int k;
	i=0;
	j=0;
	q=(char**)malloc(sizeof(char*)*count(str)+1);
	while(str[i] != '\0' && j < count(str))
	{
		k = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		q[j] = (char*)malloc(sizeof(char) * length(str, i) + 1);
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
				&& str[i] != '\0')
		{
			q[j][k++] = str[i++];
		}
		q[j][k] = '\0';
		j++;



	}
	q[j]=0;
	return(q);

}

void ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		tab++;
	}
}

int main()
{
	char **tab;
	char *str;
	str = "help me  	 	 please";

	tab = ft_split_whitespaces(str);
	ft_print_words_tables(tab);

	return 0;
}















