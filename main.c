/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:04:19 by arokhsi           #+#    #+#             */
/*   Updated: 2025/04/07 14:47:29 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	check_empty(int ac, char **av)
{
	int	i;
	int	j;
	int	has_non_space;

	i = 1;
	while (i < ac)
	{
		if (!av[i][0])
			return (1);
		j = 0;
		has_non_space = 0;
		while (av[i][j])
		{
			if (av[i][j] != ' ')
				has_non_space = 1;
			j++;
		}
		if (!has_non_space)
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort(t_ps *arr)
{
	if (arr->size_a <= 3)
		tiny_sort(arr);
	else if (arr->size_a == 5)
		sortfive(arr);
	else if (arr->size_a < 20)
		selection_sort(arr);
	else
		chunk_sort(arr);
}

int	main(int ac, char **av)
{
	t_ps	*arr;

	if (ac < 2)
		return (0);
	if (check_empty(ac, av))
		return (write(2, "Error\n", 6), 1);
	arr = ft_init(ac - 1, av + 1);
	if (!arr)
		return (1);
	ft_sort(arr);
	ft_exit(arr);
}
