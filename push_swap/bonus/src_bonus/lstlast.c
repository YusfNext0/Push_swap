/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:57:01 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/27 17:51:29 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_list	*lstlast(t_list *lst)
{
	t_list	*node;

	node = lst;
	if (lst)
	{
		while (node->next)
		{
			node = node->next;
		}
	}
	return (node);
}
