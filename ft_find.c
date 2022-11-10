/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanab <yanab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:42:21 by yanab             #+#    #+#             */
/*   Updated: 2022/04/07 21:46:16 by yanab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find(int length, int *array, int num)
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (array[i] == num)
			return (i);
		i++;
	}
	return (-1);
}