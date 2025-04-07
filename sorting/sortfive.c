/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:08:05 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/07 11:09:11 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortfive(t_ps *arr)
{
	int		min;
	size_t	i;
	int		check;

	i = 0;
	check = 0;
	while (1)
	{
		min = arr->arr_a[get_min_nbr_i(arr->arr_a, arr->size_a)];
		if (check == 2)
			break ;
		if (min == arr->arr_a[0])
		{
			pb(arr);
			check++;
		}
		else if (get_min_nbr_i(arr->arr_a, arr->size_a) < (arr->size_a / 2))
			ra(arr);
		else
			rra(arr);
		i++;
	}
	tiny_sort(arr);
	pa(arr);
	pa(arr);
}
