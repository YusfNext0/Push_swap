/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:16:52 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/13 23:42:54 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct n_list
{
	int				content;
	int				index;
	struct n_list	*next;
}	t_list;

long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	lstadd_back(t_list **lst, t_list *new);
t_list	*lstnew(long content);
t_list	*lstlast(t_list *lst);
void	lstadd_front(t_list **lst, t_list *new);
int		lstsize(t_list *lst);
void	sa(t_list **a, int k);
void	sb(t_list **b, int k);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a, int k);
void	rb(t_list **b, int k);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a, int k);
void	rrb(t_list **b, int k);
void	rrr(t_list **a, t_list **b);
void	test_sort3(t_list **a);
void	indexx(t_list **a);
void	test_sort5(t_list **a, t_list **b);
void	sort_all(t_list **a, t_list **b);
void	flip_to_a(t_list **a, t_list **b);
void	error_1(int i);

#endif