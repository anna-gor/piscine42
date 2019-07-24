/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huhobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 19:11:10 by huhobert          #+#    #+#             */
/*   Updated: 2019/07/19 19:32:05 by huhobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
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
