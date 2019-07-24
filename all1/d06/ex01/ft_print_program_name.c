/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 19:29:06 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/10 21:05:48 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
 
     int ft_putchar(char c)
	   {
		             write(1, &c, 1);
			           return (0);
			     }

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
//	if (argc >=1) 
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
