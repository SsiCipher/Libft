/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_every.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 09:28:15 by marvin            #+#    #+#             */
/*   Updated: 2021/12/19 09:28:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_every(const char *str, int (*f)(char))
{
	while (*str)
	{
		if (!f(*str))
			return (0);
		str++;
	}
	return (1);
}