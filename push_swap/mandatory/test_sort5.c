/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:19:33 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/18 16:57:02 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_final_5(t_list *ptr)
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

int	check_middle_sort5(t_list *a, t_list *b)
{
	int	size_lst;
	int	i;

	i = 0;
	size_lst = lstsize(a);
	while ((a))
	{
		if ((((a)->index == 0) || ((a)->index == 1 && b))
			&& ((i <= (size_lst / 2))))
			return (1);
		(a) = (a)->next;
		i++;
	}
	return (0);
}

void	test_sort5(t_list **a, t_list **b)
{
	if (!check_sort_final_5(*a) && !*b)
		return ;
	while (lstsize(*a) > 3)
	{
		if (check_middle_sort5((*a), (*b)) == 1)
		{
			if (((*a)->index == 0) || ((*a)->index == 1 && *b))
				pb(a, b);
			else
				ra(a, 0);
		}
		else
		{
			if ((lstlast(*a)->index == 0) || (lstlast(*a)->index == 1 && *b))
			{
				rra(a, 0);
				if (check_sort_final_5(*a) == 0 && !*b)
					break ;
				pb(a, b);
			}
			else
				rra(a, 0);
		}
	}
	(test_sort3(a), pa(a, b), pa(a, b));
}
