/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_found_action.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:54:27 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/14 11:03:55 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_found_action(char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		return (1);
	else if (ft_strcmp(str, "sb\n") == 0)
		return (1);
	else if (ft_strcmp(str, "ss\n") == 0)
		return (1);
	else if (ft_strcmp(str, "pa\n") == 0)
		return (1);
	else if (ft_strcmp(str, "pb\n") == 0)
		return (1);
	else if (ft_strcmp(str, "ra\n") == 0)
		return (1);
	else if (ft_strcmp(str, "rb\n") == 0)
		return (1);
	else if (ft_strcmp(str, "rr\n") == 0)
		return (1);
	else if (ft_strcmp(str, "rra\n") == 0)
		return (1);
	else if (ft_strcmp(str, "rrb\n") == 0)
		return (1);
	else if (ft_strcmp(str, "rrr\n") == 0)
		return (1);
	else
		return (0);
}
