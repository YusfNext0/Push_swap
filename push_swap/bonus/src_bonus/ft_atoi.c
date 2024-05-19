/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:33:06 by ynachat           #+#    #+#             */
/*   Updated: 2024/05/14 16:39:35 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

long	number(const char str, long *num, int *sign)
{
	if (str >= '0' && str <= '9')
	{
		*num = *num * 10 + (str - 48);
		if ((*num * (*sign)) > 2147483647 || (*num * (*sign)) < -2147483648)
			return (2147483649);
	}
	else
		return (2147483649);
	return (*num);
}

long	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	num;
	int		cnt;

	i = 0;
	num = 0;
	sign = 1;
	cnt = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		cnt++;
		i++;
	}
	if (!str[i] || cnt > 1)
		return (2147483649);
	while (str[i])
		num = number(str[i++], &num, &sign);
	if (num == 2147483649)
		return (2147483649);
	return (num * sign);
}
