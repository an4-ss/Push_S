/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:56:17 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/05 15:24:25 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_ps *arr)
{
	size_t	i;
	
	i = arr->size_a;
	while (i > 0)
	{
		arr->arr_a[i] = arr->arr_a[i - 1];
		i--;
	}
	arr->arr_a[i] = arr->arr_b[i];
	while (i < arr->size_b - 1)
	{
		arr->arr_b[i] = arr->arr_b[i + 1];
		i++;
	}
	arr->size_a++;
	arr->size_b--;
	ft_putstr("pa\n");
}

void	pb(t_ps *arr)
{
	size_t	i;

	i = arr->size_b;
	while (i > 0)
	{
		arr->arr_b[i] = arr->arr_b[i - 1];
		i--;
	}
	arr->arr_b[i] = arr->arr_a[i];
	while (i < arr->size_a - 1)
	{
		arr->arr_a[i] = arr->arr_a[i + 1];
		i++;
	}
	arr->size_a--;
	arr->size_b++;
	ft_putstr("pb\n");
}