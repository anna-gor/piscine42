/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:07:44 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/09 14:14:26 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int beg;
	int i;

	beg = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z' && beg == 0)
				str[i] = str[i] + 32;
			else if (str[i] >= 'a' && str[i] <= 'z' && beg == 1)
				str[i] = str[i] - 32;
			beg = 0;
		}
		else
			beg = 1;
		i++;
	}
	return (str);
}
