/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 23:22:38 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/06 14:55:14 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_chunk(t_ps *arr, int chunk_upper_bound, int chunk_midpoint, size_t chunck_size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (i < arr->size_a)
	{
		if (count >= chunck_size)
			break ;
		if (arr->arr_a[0] <= chunk_upper_bound)
		{
			pb(arr);
			count++;
			if (arr->arr_b[0] <= chunk_midpoint)
				rb(arr);
		}
		else
		{
			ra(arr);
			i++;
		}
	}
}

void	ft_push_to_a(t_ps *arr)
{
	size_t	maxi;
	int		max_nbr;

	while (arr->size_b > 0)
	{
		maxi = get_max_nbr_i(arr->arr_b, arr->size_b);
		max_nbr = arr->arr_b[maxi];
		while (1 == 1)
		{
			if (arr->arr_b[0] == max_nbr)
			{
				pa(arr);
				break ;
			}
			if (maxi > arr->size_b / 2)
				rrb(arr);
			else
				rb(arr);
		}
	}
}

void	ft_push_to_b(t_ps *arr, size_t chunck_size)
{
	int	chunk_upper_bound;
	int	chunk_range;
	int	chunk_midpoint;

	chunk_upper_bound = get_nth_largest(arr->arr_a, arr->size_a, chunck_size);
	chunk_range = chunk_upper_bound - arr->arr_a[get_min_nbr_i(arr->arr_a, arr->size_a)];
	chunk_midpoint = chunk_upper_bound - (chunk_range / 2);
	while (arr->size_a > 0)
	{
		ft_push_chunk(arr, chunk_upper_bound, chunk_midpoint, chunck_size);
		chunk_upper_bound = get_nth_largest(arr->arr_a, arr->size_a, chunck_size);
		chunk_range = chunk_upper_bound - arr->arr_a[get_min_nbr_i(arr->arr_a, arr->size_a)];
		chunk_midpoint = chunk_upper_bound - (chunk_range / 2);
	}
}

void	chunk_sort(t_ps *arr)
{
	int	chunck_size;

	if (arr->size_a <= 250)
		chunck_size = 20;
	else
		chunck_size = 70;
	ft_push_to_b(arr, chunck_size);
	ft_push_to_a(arr);
}
