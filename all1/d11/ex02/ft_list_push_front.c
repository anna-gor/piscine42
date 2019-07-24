/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:59:25 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/17 11:51:34 by huhobert         ###   ########.fr       */
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

void walk(t_list *elem)
{
	int i = 0;
	int d = 0;
	while (elem)
	{
		d = *(int*)(elem -> data);
		printf("[%d ,%d]->", i++, d);
		elem = elem -> next;
	}
	printf("null\n");
}

int main()
{
	int a01 = 10;
	int b01 = 5;
	int c01 = 7;
	int d01 = 13;
	t_list *l1 = ft_create_elem(&a01);
	ft_list_push_front(&l1, &b01);
	ft_list_push_front(&l1, &c01);
	ft_list_push_front(&l1, &d01);
	walk(l1);
}
