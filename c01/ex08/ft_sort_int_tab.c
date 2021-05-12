/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:37:11 by lprates           #+#    #+#             */
/*   Updated: 2020/10/28 17:18:02 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftswap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				ftswap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		i = 0;
		j++;
	}
}
