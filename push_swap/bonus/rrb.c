/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 02:12:58 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/28 02:45:42 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rrb(t_list **b)
{
	t_list	*last;
	t_list	*befor;

	if (!(*b) || !(*b)->next)
		return ;
	befor = (*b);
	last = lstlast((*b));
	while (befor->next->next)
		befor = befor->next;
	befor->next = NULL;
	last->next = (*b);
	(*b) = last;
}
