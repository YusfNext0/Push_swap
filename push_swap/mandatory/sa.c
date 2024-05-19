/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:33:55 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/22 14:27:39 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a, int k)
{
	t_list	*temp;

	if (!(*a) || !(*a)->next)
		return ;
	temp = (*a)->next;
	(*a)->next = temp->next;
	temp->next = (*a);
	(*a) = temp;
	if (k == 1)
		return ;
	else
		write (1, "sa\n", 3);
}
