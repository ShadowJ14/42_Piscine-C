/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfalcao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:42:20 by bfalcao-          #+#    #+#             */
/*   Updated: 2020/11/01 22:42:49 by bfalcao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int				verif_view_r_col(int **matrix, int m_size, int i, int expect_r);
int				verif_view_r_row(int *row, int m_size, int expect_r);
int				verif_r_col(int **matrix, int i, int m_size, int *input);
int				verif_r_row(int *row, int i, int m_size, int *input);

int				verif_view_l_col(int **matrix, int m_size, int i, int expect_l)
{
	int		x;
	int		tmax_l;
	int		view_l;

	tmax_l = 0;
	view_l = 0;
	m_size--;
	x = -1;
	while (++x <= m_size)
	{
		if (matrix[x][i] > tmax_l)
		{
			tmax_l = matrix[x][i];
			view_l++;
		}
	}
	if (view_l != expect_l)
		return (0);
	return (1);
}

int				verif_view_l_row(int *row, int m_size, int expect_l)
{
	int		x;
	int		tmax_l;
	int		view_l;

	tmax_l = 0;
	view_l = 0;
	m_size--;
	x = -1;
	while (++x <= m_size)
	{
		if (row[x] > tmax_l)
		{
			tmax_l = row[x];
			view_l++;
		}
	}
	if (view_l != expect_l)
		return (0);
	return (1);
}

int				verif_l_col(int **matrix, int i, int m_size, int *input)
{
	int		x;
	int		y;
	int		view_l;

	x = 0;
	while (x + 1 < m_size)
	{
		y = 0;
		while (y < m_size)
		{
			if (matrix[y][i] == 0)
				return (1);
			if (matrix[x][i] == matrix[y][i] && y != x)
				return (0);
			y++;
		}
		x++;
	}
	view_l = input[i];
	return (verif_view_l_col(matrix, m_size, i, view_l));
	return (1);
}

int				verif_l_row(int *row, int i, int m_size, int *input)
{
	int		x;
	int		y;
	int		view_l;

	x = 0;
	while (x + 1 < m_size)
	{
		y = 0;
		while (y < m_size)
		{
			if (row[y] == 0)
				return (1);
			if (row[x] == row[y] && y != x)
				return (0);
			y++;
		}
		x++;
	}
	view_l = input[i + m_size * 2];
	return (verif_view_l_row(row, m_size, view_l));
}

int				verif(int **matrix, int *input, int max, int m_size)
{
	int i;

	i = 0;
	while (i <= max)
	{
		if (!verif_l_row(matrix[i % m_size], i % m_size, m_size, input)
				|| !verif_r_row(matrix[i % m_size], i % m_size, m_size, input)
				|| !verif_l_col(matrix, i / m_size, m_size, input)
				|| !verif_r_col(matrix, i / m_size, m_size, input))
			return (0);
		i += m_size + 1;
	}
	return (1);
}
