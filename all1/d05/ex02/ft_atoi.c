/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:17:26 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/09 16:36:39 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_flag(int flag, int n)
{
	if (flag == 1)
	{
		return (-n);
	}
	return (n);
}

int		ft_atoi(char *str)
{
	int n;
	int i;
	int flag;

	n = 0;
	i = 0;
	flag = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		flag = 1;
		i++;
	}
	while ((str[i] <= '9') && (str[i] >= '0'))
	{
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	check_flag(flag, n);
}
