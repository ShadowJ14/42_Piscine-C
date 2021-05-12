/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:21:56 by jvieira           #+#    #+#             */
/*   Updated: 2020/10/25 17:11:04 by mmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y && (y > 0 && x > 0))
	{
		while (i < x)
		{
			if ((i == 0 && j == 0) || ((i == x - 1 && j == y - 1) &&
				(x - 1 > 0 && y - 1 > 0)))
				ft_putchar('A');
			else if (((i > 0 && i < x - 1) && (j == 0 || j == y - 1)) ||
					((i == 0 || i == x - 1) && (j > 0 && j < y - 1)))
				ft_putchar('B');
			else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
				ft_putchar('C');
			else
				ft_putchar(' ');
			++i;
		}
		i = 0;
		ft_putchar('\n');
		j++;
	}
}
