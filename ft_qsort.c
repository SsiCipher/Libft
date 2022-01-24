/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipher <cipher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 08:33:05 by cipher            #+#    #+#             */
/*   Updated: 2022/01/24 10:25:51 by cipher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_sort_part(int *array, int size, int (*cmp)(int, int))
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while(++j < size)
	{
		if (cmp(array[j] ,array[size - 1]) <= 0)
			ft_swap(array, i++, j);
	}
	if (i == 0)
		return (0);
	return (i - 1);
}

void	ft_qsort(int *array, int size, int (*cmp)(int, int))
{
	int	pivot_i;

	if (size > 1)
	{
		pivot_i = ft_sort_part(array, size, cmp);
		ft_qsort(array, pivot_i, cmp);
		ft_qsort(array + pivot_i + 1, size - (pivot_i + 1), cmp);
	}
}
