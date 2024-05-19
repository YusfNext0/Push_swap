/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:19:43 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/27 17:51:34 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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
