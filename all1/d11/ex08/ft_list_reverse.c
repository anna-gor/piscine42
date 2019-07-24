/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 21:22:33 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/17 22:02:39 by huhobert         ###   ########.fr       */
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
int ft_list_size(t_list *begin_list)
	  {
		       int i = 0;
		        while (begin_list)
			         {
					          begin_list=begin_list->next;
					           i++;
					       }
		         return (i);
			}

void ft_list_reverse(t_list **begin_list)
{
	t_list *tmp1;
	t_list *tmp2;
  if (ft_list_size(*begin_list)%2==0)
  { printf("chet");
	  int i=1;
	  while (i<=n/2)
	  {
		  tmp = ft_list_at(*begin_list, i);
			

	  }

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
	ft_list_reverse(&l1);
}

