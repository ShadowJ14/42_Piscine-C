/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:48:10 by lprates           #+#    #+#             */
/*   Updated: 2020/11/07 01:49:17 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		arraysize(int min, int max)
{
	int size;

	if (min < 0 && max >= 0)
	{
		min *= -1;
		return (size = max + min);
	}
	if (min < 0 && max < 0)
	{
		min *= -1;
		max *= -1;
		return (size = min - max);
	}
	if (min >= 0 && max >= 0)
		return (size = max - min);
	return (0);
}

int		*ft_range(int min, int max)
{
	long long	size;
	int			*array;
	int			i;

	i = 0;
	if (min >= max)
		return (0);
	size = arraysize(min, max);
	if (!(array = malloc((size) * sizeof(int))))
		return (0);
	while (min < max)
	{
		array[i++] = min;
		min++;
	}
	return (array);
}
