/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 02:27:18 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/14 18:59:47 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct n_list
{
	int				content;
	int				index;
	char			*action;
	struct n_list	*next;
}	t_list;

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strxcpy(char *dst, const char *src, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s1);

long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	lstadd_back(t_list **lst, t_list *new);
t_list	*lstnew(long content);
t_list	*lstnew_action(char *action);
t_list	*lstlast(t_list *lst);
void	lstadd_front(t_list **lst, t_list *new);
int		lstsize(t_list *lst);
void	error_1(int i);
int		ft_strcmp(const char *s1, const char *s2);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	check_action(t_list **stack_a, t_list **stack_b, char *str,
			t_list *tmp);
void	indexx2(t_list **a);
void	ft_lstclear(t_list **lst);
void	free_mat(char **mtr);
int		check_found_action(char *str);

#endif