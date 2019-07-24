/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:39:23 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/17 15:47:34 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
t_list *ft_create_elem(void *data)
{
	t_list *elem;
	elem =(t_list*)malloc(sizeof(t_list));
	if (elem)
	{
		elem->next=NULL;
		elem->data=data;
		return(elem);
	}
return(NULL);
}

int main()
{
	t_list *item = ft_create_elem("");
	printf("%s\n", (char*)item -> data);
	printf("%p\n", item -> next);
	return (0);
}
