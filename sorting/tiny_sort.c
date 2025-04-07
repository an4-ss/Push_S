/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:34:23 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/07 10:47:00 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tiny_sort(t_ps *arr)
{
	int	max;

	max = get_nth_largest(arr->arr_a, arr->size_a, arr->size_a);
	if ((arr->size_a == 2 || max == arr->arr_a[2])
		&& !ft_is_sorted(arr->arr_a, arr->size_a))
		return (sa(arr));
	if (arr->arr_a[0] == max)
		ra(arr);
	if (arr->arr_a[0] > arr->arr_a[1])
		return (sa(arr));
	if (arr->arr_a[0] < arr->arr_a[1] && max == arr->arr_a[2])
		return ;
	if (arr->arr_a[1] == max)
	{
		sa(arr);
		ra(arr);
	}
	if (arr->arr_a[0] > arr->arr_a[1])
		sa(arr);
}
