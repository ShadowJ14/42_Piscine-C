/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:21:56 by jvieira           #+#    #+#             */
/*   Updated: 2020/10/25 16:26:51 by mmota            ###   ########.fr       */
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
			if ((i == 0 || i == x - 1) && (j == 0 || j == y - 1))
				ft_putchar('o');
			else if ((i > 0 || i < x - 1) && (j == 0 || j == y - 1))
				ft_putchar('-');
			else if ((i == 0 || i == x - 1) && (j > 0 || j < y - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			++i;
		}
		i = 0;
		ft_putchar('\n');
		j++;
	}
}
