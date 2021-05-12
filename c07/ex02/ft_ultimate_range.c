/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:10:50 by lprates           #+#    #+#             */
/*   Updated: 2020/11/07 01:49:21 by lprates          ###   ########.fr       */
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

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *array;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	size = arraysize(min, max);
	if (!(array = (int *)malloc((size) * sizeof(*array))))
		return (-1);
	while (min < max)
	{
		array[i++] = min;
		min++;
	}
	*range = array;
	return (size);
}
