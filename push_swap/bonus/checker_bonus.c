/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:27:32 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/14 16:45:43 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	parcing(char **p, t_list **a)
{
	t_list	*new;
	t_list	*head;
	int		j;

	if (!p[0])
		(ft_lstclear(a), error_1(1));
	j = 0;
	while (p[j])
	{
		head = (*a);
		while (head)
		{
			if (head->content == ft_atoi(p[j]))
				(ft_lstclear(a), free_mat(p), error_1(1));
			head = head->next;
		}
		new = lstnew(ft_atoi(p[j]));
		if (!new)
			(ft_lstclear(a), free_mat(p), error_1(1));
		new->index = -1;
		lstadd_back(a, new);
		j++;
	}
}

int	check_sort_final(t_list *ptr)
{
	t_list	*p;

	p = ptr;
	while (p && p->next)
	{
		if (p->index > p->next->index)
			return (1);
		p = p->next;
	}
	return (0);
}

void	loop_check_free(t_list	*node, t_list **a, t_list **b, t_list *tmp)
{
	if (!node)
		return ;
	tmp = node;
	while (node)
		(check_action(a, b, node->action, tmp),
			free(node->action), node = node->next);
	ft_lstclear(&tmp);
}

void	loop_action(t_list **a, t_list **b)
{
	t_list	*node;
	t_list	*new;
	char	*str;
	t_list	*tmp;

	(1) && (node = NULL, new = NULL, tmp = NULL);
	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		new = lstnew_action(str);
		if (!new)
			(ft_lstclear(&node), ft_lstclear(a), error_1(1));
		if (!new->action)
			break ;
		if (check_found_action(new->action) == 0)
			(ft_lstclear(&tmp), ft_lstclear(a), error_1(1));
		lstadd_back(&node, new);
	}
	loop_check_free(node, a, b, tmp);
}

int	main(int ac, char *av[])
{
	t_list	*a;
	t_list	*b;
	char	**p;
	t_list	*tmp;

	(1) && (a = NULL, b = NULL);
	if (ac == 1)
		return (0);
	while (*(++av))
	{
		p = ft_split(*av, ' ');
		if (!p)
			(ft_lstclear(&a), error_1(1));
		(parcing(p, &a), free_mat(p));
	}
	(1) && (indexx2(&a), loop_action(&a, &b), tmp = a);
	if (check_sort_final(tmp) == 0 && !b)
		(ft_lstclear(&a), write(1, "OK\n", 3));
	else
	{
		ft_lstclear(&a);
		if (b)
			ft_lstclear(&b);
		write(1, "KO\n", 3);
	}
}
