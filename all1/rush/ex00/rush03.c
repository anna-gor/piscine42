/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aolen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 19:41:50 by aolen             #+#    #+#             */
/*   Updated: 2019/07/07 14:53:38 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_char(int i, int j, int columns, int strings)
{
	char left;
	char right;
	char line;
	char inside;

	left = 'A';
	right = 'C';
	line = 'B';
	inside = ' ';
	if ((j == 1) && ((i == 1) || (i == strings)))
		return (left);
	else if ((j == columns) && ((i == 1) || (i == strings)))
		return (right);
	else if ((j == columns) || (i == strings) || (i == 1) || (j == 1))
		return (line);
	else
		return (inside);
}

void	rush(int x, int y)
{
	char	new_line;
	int		i;
	int		j;

	new_line = '\n';
	i = 1;
	j = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			ft_putchar(check_char(i, j, x, y));
			j++;
		}
		ft_putchar(new_line);
		i++;
	}
}
