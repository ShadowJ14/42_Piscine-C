/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfalcao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:43:52 by bfalcao-          #+#    #+#             */
/*   Updated: 2020/11/01 22:44:02 by bfalcao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int				verif_view_r_col(int **matrix, int m_size, int i, int expect_r)
{
	int		x;
	int		tmax_r;
	int		view_r;

	tmax_r = 0;
	view_r = 0;
	m_size--;
	x = -1;
	while (++x <= m_size)
	{
		if (matrix[m_size - x][i] > tmax_r)
		{
			tmax_r = matrix[m_size - x][i];
			view_r++;
		}
	}
	if (view_r != expect_r)
		return (0);
	return (1);
}

int				verif_view_r_row(int *row, int m_size, int expect_r)
{
	int		x;
	int		tmax_r;
	int		view_r;

	tmax_r = 0;
	view_r = 0;
	m_size--;
	x = -1;
	while (++x <= m_size)
	{
		if (row[m_size - x] > tmax_r)
		{
			tmax_r = row[m_size - x];
			view_r++;
		}
	}
	if (view_r != expect_r)
		return (0);
	return (1);
}

int				verif_r_col(int **matrix, int i, int m_size, int *input)
{
	int		x;
	int		y;
	int		view_r;

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
	view_r = input[i + m_size];
	return (verif_view_r_col(matrix, m_size, i, view_r));
	return (1);
}

int				verif_r_row(int *row, int i, int m_size, int *input)
{
	int		x;
	int		y;
	int		view_r;

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
	view_r = input[i + m_size * 3];
	return (verif_view_r_row(row, m_size, view_r));
}
