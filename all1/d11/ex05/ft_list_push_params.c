/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:28:13 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/17 22:06:12 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "ft_list.h"

t_list*ft_create_elem(void *data)
{
	t_list *elem;
	elem =(t_list*)malloc(sizeof(t_list));
	if (elem)
	{
		elem->next=NULL;
		elem->data=data;
	}
	return(elem);

}
void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;
	list = *begin_list;
	if(list)
	{
		while(list->next)
			list=list->next;
		list->next=ft_create_elem(data);
	}
	else
		*begin_list=ft_create_elem(data);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	if(*begin_list)
	{
		list=ft_create_elem(data);
		list->next=*begin_list;
		*begin_list=list;
	}
	else
		*begin_list=ft_create_elem(data);
}

t_list *ft_list_push_params(int ac, char **av)
{
	t_list *beg;
	beg = ft_create_elem(av[0]);
	int i = 0;
	while(i<ac-1)
	{
		i++;
		ft_list_push_front(&beg, av[i]);
	}
	return(beg);

}

void walk(t_list *elem)
{
	int i = 0;
	while (elem)
	{
		printf("[%d,%s]->", i++, (char*)elem -> data);
		//printf("[%d ,%c]->", i++, d);
		elem = elem -> next;
	}
	printf("null\n");
}

int main(int argc, char **argv)
{
	/*int a01 = 10;
	int b01 = 5;
	int c01 = 7;
	int d01 = 13;
	t_list *l1 = ft_create_elem(&a01);
	ft_list_push_back(&l1, &b01);
	ft_list_push_back(&l1, &c01);
	ft_list_push_back(&l1, &d01);*/
	t_list *l1;
	l1 = ft_list_push_params(argc, argv);
	walk(l1);
	}
