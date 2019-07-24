/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:01:25 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/19 23:20:00 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*node;
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	node = *root;
	if ((*cmpf)(item, node->item) < 0)
	{
		if (node->left)
			btree_insert_data(&node->left, item, cmpf);
		else
			node->left = btree_create_node(item);
	}
	else
	{
		if (node->right)
			btree_insert_data(&node->right, item, cmpf);
		else
			node->right = btree_create_node(item);
	}
}

int     ft_strcmp(void *v1, void *v2)
{
	char    *s1;
	char    *s2;

	s1 = (char *)v1;
	s2 = (char *)v2;
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void    ft_putstr(void *v)
{
	char *str;

	str = (char *)v;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
t_btree *btree_create_node(void *item)
{
	t_btree *elem;

	elem = (t_btree*)malloc(sizeof(t_btree));
	if (elem)
	{
		elem->left = 0;
		elem->right = 0;
		elem->item = item;
		return (elem);
	}
	return (NULL);

}

void print_tree(t_btree *r,int l)
{
	int i;
	if(!r) return ;
	print_tree(r->right,l+1);
	for(i=0;i<l;++i)
		printf(" ");
	printf("%c \n",*(char*)r->item);
	print_tree(r->left,l+1);
}
int main(void)
{
	t_btree *root;

	root = NULL;
	btree_insert_data(&root, "5", &ft_strcmp);
	btree_insert_data(&root, "3", &ft_strcmp);
	btree_insert_data(&root, "8", &ft_strcmp);
	btree_insert_data(&root, "4", &ft_strcmp);
	btree_insert_data(&root, "1", &ft_strcmp);
	btree_insert_data(&root, "9", &ft_strcmp);
	btree_insert_data(&root, "0", &ft_strcmp);
	btree_insert_data(&root, "7", &ft_strcmp);
	btree_insert_data(&root, "6", &ft_strcmp);
	btree_insert_data(&root, "2", &ft_strcmp);
	btree_insert_data(&root, "4", &ft_strcmp);
	btree_insert_data(&root, "7", &ft_strcmp);
	print_tree(root,0);
//	ft_putstr("<");
//	btree_apply_prefix(root, &ft_putstr);
//	ft_putstr("\n>531024487679\n");
	/* ft_putstr("<"); */
	/* btree_apply_infix(root, &ft_putstr); */
	/* ft_putstr("\n>012344567789\n"); */
	/* ft_putstr("<"); */
	/* btree_apply_suffix(root, &ft_putstr); */
	/* ft_putstr("\n>021443677985\n"); */
	return (0);
}
