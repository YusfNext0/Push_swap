/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flip_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:06:42 by ynachat           #+#    #+#             */
/*   Updated: 2024/04/27 20:13:21 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_max(t_list *stack)
{
	t_list	*a;
	int		max;

	a = stack;
	max = a->index;
	while (a)
	{
		if (max < a->index)
			max = a->index;
		a = a->next;
	}
	return (max);
}

int	check_middle(t_list *a, t_list *b)
{
	int	size_lst;
	int	i;

	i = 0;
	size_lst = lstsize(b);
	while ((b))
	{
		if ((((a)->index - 1) == (b)->index) && (i <= (size_lst / 2)))
			return (1);
		(b) = (b)->next;
		i++;
	}
	return (0);
}

void	if_else(t_list **a, t_list **b, int last_a, int last_b)
{
	if ((*b)->index > last_a)
	{
		pa(a, b);
		ra(a, 0);
	}
	else if (last_b > last_a)
	{
		rrb(b, 0);
		pa(a, b);
		ra(a, 0);
	}
	else if (((*a)->index - 1) == last_a)
		rra(a, 0);
	else if (check_middle((*a), (*b)) == 1)
		rb(b, 0);
	else
		rrb(b, 0);
}

void	flip_to_a(t_list **a, t_list **b)
{
	int	last_a;
	int	last_b;

	while (lstsize((*b)) > 0)
	{
		last_a = lstlast(*a)->index;
		last_b = lstlast(*b)->index;
		if (((*a)->index - 1) == (*b)->index)
			pa(a, b);
		else if (((*a)->index - 1) == last_b)
		{
			rrb(b, 0);
			pa(a, b);
		}
		else if (check_max(*a) == last_a)
		{
			pa(a, b);
			ra(a, 0);
		}
		else
			if_else(a, b, last_a, last_b);
	}
}
