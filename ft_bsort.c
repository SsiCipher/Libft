/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipher <cipher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:17:41 by marvin            #+#    #+#             */
/*   Updated: 2022/01/24 07:56:02 by cipher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap(int *arr, int i, int j)
{
	int	temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void	ft_bsort(int len, int *arr, int (*cmp)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i;
		while (j < len)
		{
			if (cmp(arr[i], arr[j]) > 0)
				ft_swap(arr, i, j);
			j++;
		}
		i++;
	}
}
