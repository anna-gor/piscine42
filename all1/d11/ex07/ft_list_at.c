/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 18:02:04 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/17 19:54:51 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data)
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

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i = 1;
	t_list *ptr;
	ptr=begin_list;
	while (i<nbr)
	{
		if (!ptr)
			return (NULL);
		ptr=ptr->next;
		i++;
	}
	return(ptr);
}

void walk(t_list *elem)
{
	int i = 1;
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
	ft_list_push_back(&l1, &b01);
	ft_list_push_back(&l1, &c01);
	ft_list_push_back(&l1, &d01);
	walk(l1);
	t_list *item;
	item = ft_list_at(l1, 2);
	printf("%d\n",*(int*)item->data);
}
