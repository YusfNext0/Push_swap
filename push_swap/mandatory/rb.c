/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:43:27 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/22 14:27:39 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **b, int k)
{
	t_list	*temp;

	if (!(*b) || !(*b)->next)
		return ;
	temp = (*b);
	(*b) = (*b)->next;
	temp->next = NULL;
	lstadd_back(b, temp);
	if (k == 1)
		return ;
	else
		write (1, "rb\n", 3);
}
