/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:16:48 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/15 16:45:49 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	free_mat(char **mtr)
{
	int	i;

	i = 0;
	while (mtr[i])
	{
		free(mtr[i]);
		i++;
	}
	free(mtr);
}

void	parcing(char **p, t_list **a)
{
	t_list	*new;
	t_list	*head;
	int		j;

	if (!p[0])
		(ft_lstclear(a), free_mat(p), error_1(1));
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

int	main(int ac, char *av[])
{
	int		i;
	t_list	*a;
	t_list	*b;
	char	**p;

	(1) && (i = 0, a = NULL, b = NULL);
	if (ac == 1)
		return (0);
	while (av[++i])
	{
		p = ft_split(av[i], ' ');
		if (!p)
			(ft_lstclear(&a), error_1(1));
		(parcing(p, &a), free_mat(p));
	}
	indexx(&a);
	i = lstsize(a);
	if (i == 3)
		test_sort3(&a);
	else if (i > 3 && i <= 5)
		test_sort5(&a, &b);
	else
		sort_all(&a, &b);
	ft_lstclear(&a);
}
