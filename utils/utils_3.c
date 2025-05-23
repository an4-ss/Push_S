/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:03:59 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/11 16:07:50 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	process_number(char *str, size_t *j, size_t *size)
{
	if (str[*j] != '\0')
	{
		if (is_sign(str[*j]) && str[*j])
			(*j)++;
		if (!is_number(str[*j]))
			return (write(2, "Error\n", 6), 0);
		(*size)++;
	}
	return (1);
}

int	process_and_store_number(char *str, size_t *j, t_ps *arr, size_t *a)
{
	long	tmp;

	if (!str[*j])
		return (0);
	if (!is_number(str[*j]) && !is_sign(str[*j]))
		return (0);
	tmp = ft_atol(&str[*j]);
	arr->arr_a[(*a)++] = (int)tmp;
	return (0);
}
