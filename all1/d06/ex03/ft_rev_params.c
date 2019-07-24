/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 20:13:36 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/09 20:18:02 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

int main(int argc, char **argv)
{
		int i = 1;
			while (i< argc)
					{ft_putstr(argv[argc - i]);
								ft_putchar('\n');
										i++;}
				return (0);
}
