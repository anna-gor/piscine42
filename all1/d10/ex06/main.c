/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:01:31 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/16 16:28:45 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <unistd.h>
#include "ft_atoi.c"
#include "fun.c"
#include "write.c"*/
#include"funcs.h"

int calc(int b, char c)
{
	if (c=='+') return (0) ;
	else if (c=='-') return (1);
	else if (c=='*') return (2);
	else if (c=='/')
	{if (b!=0)	return(3);
		else write(1, "Stop : division by zero\n", 24);return(-1);}
	else if(c=='%')
	{if (b!=0)	return(4);
		else write(1, "Stop : modulo by zero\n", 22);return(-1);}
	else return(-1);
}
int main (int argc, char **argv)
{
	int (*op[5])(int, int);
	op[0]=add;
	op[1]=subs;
	op[2]=mult;
	op[3]=div;
	op[4]=mod;

if (argc==4)
{

	int i = calc( ft_atoi(argv[3]), argv[2][0]);
	if (argv[2][1]!='\0') {ft_putchar('0'); ft_putchar('\n');}
	else if (i>=0)
	{//printf("%d\n",op[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
ft_putnbr(op[i](ft_atoi(argv[1]), ft_atoi(argv[3])));write(1,"\n",1);}
	else {ft_putchar('0'); ft_putchar('\n');}}
	return 0;
	}
