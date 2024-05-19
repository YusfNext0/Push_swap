/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:43:24 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/22 14:27:39 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a, int k)
{
	t_list	*temp;

	if (!(*a) || !(*a)->next)
		return ;
	temp = (*a);
	(*a) = (*a)->next;
	temp->next = NULL;
	lstadd_back(a, temp);
	if (k == 1)
		return ;
	else
		write (1, "ra\n", 3);
}
