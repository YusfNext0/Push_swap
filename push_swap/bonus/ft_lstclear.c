/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:19:25 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/02 17:08:38 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*l;

	if (!lst || !(*lst))
		return ;
	while (*lst)
	{
		l = (*lst)->next;
		free(*lst);
		*lst = l;
	}
	*lst = NULL;
}
