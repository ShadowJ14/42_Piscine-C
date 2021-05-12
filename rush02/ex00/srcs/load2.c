/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:50:10 by lprates           #+#    #+#             */
/*   Updated: 2020/11/08 22:06:59 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "load2.h"

void	place_key(char *buff, int lenght, t_number **dict, int i)
{
	if (!((*dict)[i].number = malloc(lenght * sizeof(char))))
		return ;
	(*dict)[i].number = buff;
	return ;
}

void	place_value(char *buff, int lenght, t_number **dict, int i)
{
	if (!((*dict)[i].letters = malloc(lenght * sizeof(char))))
		return ;
	(*dict)[i].letters = buff;
	return ;
}

void	process_ptrs(char *buff)
{
	g_begin = buff;
	while (*g_begin != ':')
		g_begin++;
	while (!(*g_begin >= 33 && *g_begin <= 126) || *g_begin == ':')
		g_begin++;
	g_end = g_begin;
	while (*g_end != '\0')
		g_end++;
	if (*(g_end - 1) == ' ')
		while (is_white_space(*(g_end - 1)))
			g_end--;
}

void	clean_lines_value(char *buff, t_number *dict, int i)
{
	char *sav_tmp;

	process_ptrs(buff);
	if (!(g_tmp = malloc((g_end - g_begin + 1) * sizeof(char))))
		return ;
	sav_tmp = g_tmp;
	while ((g_end - g_begin) != 0)
	{
		*g_tmp = *g_begin;
		if (is_white_space(*g_begin))
		{
			while (is_white_space(*(g_begin + 1)))
				g_begin++;
		}
		g_begin++;
		g_tmp++;
	}
	*g_tmp = 0;
	place_value(sav_tmp, g_end - g_begin + 1, &dict, i);
}

void	clean_lines_key(char *buff, t_number *dict, int i)
{
	char *begin;
	char *end;
	char *tmp;
	char *sav_tmp;

	begin = buff;
	end = buff;
	while (*end >= '0' && *end <= '9')
		end++;
	if (!(tmp = malloc((end - begin + 1) * sizeof(char))))
		return ;
	sav_tmp = tmp;
	while (*begin != *end)
	{
		*tmp = *begin;
		begin++;
		tmp++;
	}
	*tmp = 0;
	place_key(sav_tmp, end - begin + 1, &dict, i);
}
