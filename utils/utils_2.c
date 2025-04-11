/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:19:10 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/11 16:23:53 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

static void	ft_skip(char **str)
{
	while (**str == 32 || (**str >= 9 && **str <= 13))
		(*str)++;
}

long	ft_atol(char *str)
{
	int		i;
	long	res;
	int		sign;

	res = 0;
	i = 0;
	sign = 1;
	ft_skip(&str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
		{
			write (2, "Error\n", 6);
			exit (0);
		}
		i++;
	}
	return (res * sign);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
