/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexx2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:21:06 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/28 14:28:40 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	indexx2(t_list **a)
{
	t_list	*current;
	t_list	*second;
	int		i;

	i = 0;
	current = (*a);
	while (current)
	{
		second = (*a);
		i = 0;
		while (second)
		{
			if (current->content > second->content)
			{
				i++;
				current->index = i;
			}
			else if (current->index == -1)
				current->index = 0;
			second = second->next;
		}
		current = current->next;
	}
}
