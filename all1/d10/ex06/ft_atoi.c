/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:27:44 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/16 15:16:43 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_sign(int sign, int num)
{
	if (sign == 1)
	{
		return (-num);
	}
	return (num);
}

int ft_atoi(char *str)
{
	int i;
	int s;
	int n;

	n=0;
	i=0;
	s=0;
	while (str[i]=='\t' || str[i]==' ' || str[i]=='\n' || str[i]=='\f' || str[i]=='\0'||str[i]=='\v'|| str[i]=='\r')
		i++;
	if(str[i]=='+')
		i++;
	else if (str[i]=='-')
	{
		s=1;
		i++;
	}
	while ((str[i]>='0') && (str[i]<='9'))
	{
		n *=10;
		n += str[i] - '0';
		i++;
	}
return (check_sign(s,n));
}
