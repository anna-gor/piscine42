/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:46:32 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/16 15:19:59 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __funcs_h__
#define __funcs_h__
#include<unistd.h>
int check_sign(int sign, int num);
int ft_atoi(char *str);
int add(int a, int b);
int subs(int a, int b);
int mult(int a, int b);
int div(int a, int b);
int mod(int a, int b);
void ft_putchar(char c);
void ft_putnbr_print(int nb, long div, int exeption);
void ft_putnbr(int nb);
#endif
