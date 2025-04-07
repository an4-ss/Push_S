/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:09:02 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/07 11:07:39 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	*ft_init(size_t ac, char **av)
{
	t_ps	*arr;

	arr = malloc(sizeof(t_ps));
	if (!arr)
		return (NULL);
	arr->size_a = ft_get_arr_size(ac, av);
	if (arr->size_a == 0)
		return (free(arr), NULL);
	arr->arr_a = malloc(sizeof(int) * arr->size_a);
	if (!arr->arr_a)
		return (free(arr), NULL);
	if (ft_fill_arr(arr, ac, av))
		return (free(arr->arr_a), free(arr), NULL);
	if (ft_check_duplicated(arr->arr_a, arr->size_a))
		return (free(arr->arr_a), free(arr), NULL);
	if (ft_is_sorted(arr->arr_a, arr->size_a))
		return (free(arr->arr_a), free(arr), NULL);
	arr->arr_b = malloc(arr->size_a * sizeof(int));
	if (!arr->arr_b)
		return (free(arr), free(arr->arr_a), NULL);
	arr->size_b = 0;
	return (arr);
}
