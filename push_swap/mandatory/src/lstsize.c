/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:19:43 by ynachat           #+#    #+#             */
/*   Updated: 2024/04/20 12:32:17 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lstsize(t_list *lst)
{
	t_list	*node;
	int		i;

	i = 0;
	if (!lst)
		return (0);
	node = lst;
	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}
