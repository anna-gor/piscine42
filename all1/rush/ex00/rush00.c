/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 19:41:50 by aolen             #+#    #+#             */
/*   Updated: 2019/07/07 12:42:11 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_char(int i, int j, int columns, int strings)
{
	char left = 'o';
	char horiz = '-';
	char vert = '|';
	char inside = ' ';
	if (((j == 1) || (j==columns)) && ((i == 1) || (i == strings)))
	{
		return(left);
	}
	else if (((j == columns)||(j==1)))
		return(vert);
	else if ((i == 1) || (i == strings))
		return(horiz);
	else
		return(inside);
}
void		rush(int a, int b)
{
	char new_line = '\n';
	int i;
	int j;

	i = 1;
	j = 1;
	while (i <= b)
	{
		j = 1;
		while (j <= a)
		{
				ft_putchar(check_char( i, j, a, b));
			j++;
		}
		ft_putchar(new_line);
		i++;
		}
}
