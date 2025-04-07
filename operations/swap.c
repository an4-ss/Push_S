/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:46:05 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/05 14:14:03 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_ps *arr)
{
	int	tmp;

	tmp = arr->arr_a[0];
	arr->arr_a[0] = arr->arr_a[1];
	arr->arr_a[1] = tmp;
	ft_putstr("sa\n");
}
void	sb(t_ps *arr)
{
	int	tmp;

	tmp = arr->arr_a[0];
	arr->arr_b[0] = arr->arr_a[1];
	arr->arr_b[1] = tmp;
	ft_putstr("sb\n");
}
