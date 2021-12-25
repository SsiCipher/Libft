/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.C                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 09:30:52 by marvin            #+#    #+#             */
/*   Updated: 2021/12/19 09:30:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_any(const char *str, int (*f)(char))
{
	while (*str)
	{
		if (f(*str))
			return (1);
		str++;
	}
	return (0);
}
