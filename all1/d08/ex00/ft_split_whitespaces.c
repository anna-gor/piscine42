/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:07:48 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/12 15:51:52 by huhobert         ###   ########.fr       */
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
	while (str[i] != '\0')
	{
		if ((str[i] != '\n' &&  str[i] != '\t' && str[i] != ' ') && beg == 0)
		{
			beg = 1;
			count++;
		}
		else if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
			beg = 0;
		i++;
	}
	return (count);
}

int length_of_word(char *str, int i)
{
	int len;

	len	= 0;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char **ft_split_whitespaces(char *str)
{
	char **all_words;
	int i;
	int j;
	int k;

	i=0;
	j=0;
	all_words=(char**)malloc(sizeof(char*)*count(str)+1);
	while(str[i] != '\0' && j < count(str))
	{
		k = 0;
 		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		all_words[j] = (char*)malloc(sizeof(char) * (length_of_word(str, i)+1));
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
				&& str[i] != '\0')
		{
			all_words[j][k++] = str[i++];
		}
		all_words[j][k] = '\0';
		j++;
	}
	return(all_words);
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
		     str = "	hju ku yyjrujytukyitkjyhjrtyjryuj \n help me           pleas  e  p oj juhyg iuhiuh";
		
			     tab = ft_split_whitespaces(str);
		     ft_print_words_tables(tab);
		
			     return 0;
		 }
