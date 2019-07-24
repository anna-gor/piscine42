/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:57:45 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/18 20:14:18 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 29000

void ft_putchar (char c)
{
	write(1,&c,1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

void print(char **argv, int i)
{
	int fd;
	char buf[BUF_SIZE];
	int i;
	char 
	fd = open(argv[i], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
}

int main(int argc, char **argv)
{
	int i = 1;
	while (i< argc)
	{
		print(argv, i, buf);
		//ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

