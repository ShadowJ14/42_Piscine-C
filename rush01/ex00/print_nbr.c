/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfalcao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:43:05 by bfalcao-          #+#    #+#             */
/*   Updated: 2020/11/01 22:43:33 by bfalcao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		verif(int **matrix, int *input, int max, int m_size);

void	print_nbr(int nb)
{
	unsigned int	a;
	unsigned long	i;
	char			c;

	if (nb == 0)
		write(1, "0", 1);
	i = 1;
	a = nb > 0 ? nb : -nb;
	if (nb < 0)
		write(1, "-", 1);
	while (i <= a)
		i *= 10;
	i /= 10;
	while (i >= 1)
	{
		c = (a / i + '0');
		write(1, &c, 1);
		a %= i;
		i /= 10;
	}
}

void	free_matrix(int **matrix, int m_size)
{
	int i;

	i = -1;
	while (++i < m_size)
		free(matrix[i]);
	free(matrix);
}

int		print_matrix(int **matrix, int m_size)
{
	int i;
	int j;

	i = 0;
	while (i < m_size)
	{
		j = 0;
		while (j < m_size)
		{
			print_nbr(matrix[i][j]);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int		fill_matrix(int **matrix, int *input, int m_size, int p)
{
	int i;
	int sq;

	sq = m_size * m_size;
	i = 0;
	while (i < m_size)
	{
		if (p < sq)
			matrix[p / m_size][p % m_size] = ++i;
		if (verif(matrix, input, p, m_size))
		{
			if (p == sq)
				return (print_matrix(matrix, m_size));
			if (fill_matrix(matrix, input, m_size, p + 1) == 0)
				return (0);
		}
	}
	matrix[p / m_size][p % m_size] = 0;
	return (-4);
}

int		select_nbr(int *input, int m_size)
{
	int **matrix;
	int y;
	int i;

	if (!(matrix = malloc(sizeof(int*) * m_size)))
		return (-1);
	y = 0;
	while (y < m_size)
	{
		if (!(matrix[y] = malloc(sizeof(int) * m_size)))
			return (-1);
		y++;
	}
	i = 0;
	while (i < m_size * m_size)
	{
		matrix[i / m_size][i % m_size] = 0;
		i++;
	}
	i = fill_matrix(matrix, input, m_size, 0);
	free_matrix(matrix, m_size);
	return (i);
}
