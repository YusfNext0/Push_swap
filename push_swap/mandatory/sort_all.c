/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:22:37 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/15 16:23:38 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_final(t_list *ptr)
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

void	last_action(t_list **a)
{
	while (check_sort_final(*a) == 1)
		rra(a, 0);
}

void	sort_all(t_list **a, t_list **b)
{
	int	p1;
	int	p2;
	int	siz_a;

	p2 = 0;
	if (!check_sort_final(*a) && !*b)
		return ;
	while (lstsize(*a) > 3)
	{
		siz_a = lstsize(*a);
		p1 = siz_a / 6 + p2;
		p2 += siz_a / 3;
		while (lstsize(*b) < p2)
		{
			if ((*a)->index >= p2 && (*b) && (*b)->index < p1)
				rr(a, b);
			else if ((*b) && (*b)->index < p1)
				rb(b, 0);
			if ((*a)->index < p2)
				pb(a, b);
			else if ((*a)->index >= p2)
				ra(a, 0);
		}
	}
	(test_sort3(a), flip_to_a(a, b), last_action(a));
}
