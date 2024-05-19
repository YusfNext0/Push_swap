/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:33:24 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/14 17:52:30 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new = malloc(sizeof(char ) * (len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, len + 1);
	return (new);
}
