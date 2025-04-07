/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:14:45 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/06 15:16:54 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_ps *arr)
{
	size_t	min_index;

	while (arr->size_a > 1)
	{
		min_index = get_min_nbr_i(arr->arr_a, arr->size_a);
		if (min_index <= (arr->size_a / 2))
			while (min_index-- > 0)
				ra(arr);
		else
			while (min_index++ < arr->size_a)
				rra(arr);
		pb(arr);
	}
	while (arr->size_b > 0)
		pa(arr);
}
