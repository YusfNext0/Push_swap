/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 02:12:53 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/28 02:45:36 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_list **a)
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
}
