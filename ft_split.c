/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanab <yanab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:13:23 by yanab             #+#    #+#             */
/*   Updated: 2021/11/15 23:57:05 by yanab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_parts(char const *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	if (*str == '\0')
		return (0);
	while (str[i] == sep)
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == sep && str[i + 1] != sep && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static char	*ft_nth_part(char const *str, char sep, int n)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	if (*str == '\0')
		return (&((char *)str)[0]);
	while (str[i] == sep)
		i++;
	if (str[i] == '\0')
		return (&((char *)str)[0]);
	while (str[i])
	{
		if (count == n)
			return (&((char *)str)[i]);
		if (str[i] == sep && str[i + 1] != sep && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (NULL);
}

static int	ft_partlen(char *part_start, char sep)
{
	int	len;

	len = 0;
	while (part_start[len] && part_start[len] != sep)
		len++;
	return (len);
}

static char	*ft_fill_part(char *part_start, char sep)
{
	int		i;
	int		part_len;
	char	*part;

	part_len = ft_partlen(part_start, sep);
	part = (char *)malloc(sizeof(char) * (part_len + 1));
	if (!part)
		return (NULL);
	i = 0;
	while (i < part_len)
	{
		part[i] = part_start[i];
		i++;
	}
	part[i] = '\0';
	return (part);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*part_start;
	int		parts_count;
	char	**split_str;
	char	*part;

	if (s == NULL)
		return (NULL);
	i = 0;
	parts_count = ft_count_parts(s, c);
	split_str = (char **)malloc(sizeof(char *) * (parts_count + 1));
	if (!split_str)
		return (NULL);
	while (i < parts_count)
	{
		part_start = ft_nth_part(s, c, i + 1);
		part = ft_fill_part(part_start, c);
		split_str[i] = part;
		i++;
	}
	split_str[i] = NULL;
	return (split_str);
}
