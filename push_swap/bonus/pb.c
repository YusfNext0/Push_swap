/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 02:12:28 by ynachat           #+#    #+#             */
/*   Updated: 2024/04/27 20:17:33 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!(*a))
		return ;
	temp = (*a);
	(*a) = (*a)->next;
	temp->next = (*b);
	(*b) = temp;
}
