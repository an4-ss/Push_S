/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:50:23 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/07 11:24:44 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_ps *arr)
{
	size_t	i;
	size_t	tmp;

	if (arr->size_a <= 1)
		return ;
	tmp = arr->arr_a[0];
	i = 0;
	while (i < arr->size_a - 1)
	{
		arr->arr_a[i] = arr->arr_a[i + 1];
		i++;
	}
	arr->arr_a[arr->size_a - 1] = tmp;
	ft_putstr("ra\n");
}

void	rb(t_ps *arr)
{
	size_t	i;
	size_t	tmp;

	tmp = arr->arr_b[0];
	i = 0;
	while (i < arr->size_b - 1)
	{
		arr->arr_b[i] = arr->arr_b[i + 1];
		i++;
	}
	arr->arr_b[arr->size_b - 1] = tmp;
	ft_putstr("rb\n");
}

void	rrb(t_ps *arr)
{
	size_t	i;
	int		tmp;

	tmp = arr->arr_b[arr->size_b - 1];
	i = arr->size_b - 1;
	while (i > 0)
	{
		arr->arr_b[i] = arr->arr_b[i - 1];
		i--;
	}
	arr->arr_b[0] = tmp;
	ft_putstr("rrb\n");
}

void	rra(t_ps *arr)
{
	size_t	i;
	int		tmp;

	tmp = arr->arr_a[arr->size_a - 1];
	i = arr->size_a - 1;
	while (i > 0)
	{
		arr->arr_a[i] = arr->arr_a[i - 1];
		i--;
	}
	arr->arr_a[0] = tmp;
	ft_putstr("rra\n");
}
