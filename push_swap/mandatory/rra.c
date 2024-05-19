/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:26:05 by ynachat           #+#    #+#             */
/*   Updated: 2024/04/20 23:22:38 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a, int k)
{
	t_list	*last;
	t_list	*befor;

	if (!(*a) || !(*a)->next)
		return ;
	befor = (*a);
	last = lstlast((*a));
	while (befor->next->next)
		befor = befor->next;
	befor->next = NULL;
	last->next = (*a);
	(*a) = last;
	if (k == 1)
		return ;
	else
		write (1, "rra\n", 4);
}
