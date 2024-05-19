/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:19:24 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/11 21:47:49 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_list *ptr)
{
	t_list	*p;

	p = ptr;
	while (p->next)
	{
		if (p->index > p->next->index)
			return (1);
		p = p->next;
	}
	return (0);
}

void	test_sort3(t_list **a)
{
	while (check_sort((*a)) == 1)
	{
		if ((*a)->index > (*a)->next->index)
			sa(a, 0);
		if ((*a)->next->next && (*a)->next->index > (*a)->next->next->index)
			rra(a, 0);
	}
}
