/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dict_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:05:56 by bpratas           #+#    #+#             */
/*   Updated: 2020/11/08 22:11:53 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_dict_valid.h"

int		is_dict_valid(char *file)
{
	char	*buff;
	int		fd;
	int		i;

	fd = open(file, O_RDONLY);
	while (1)
	{
		if (!(buff = malloc(1025 * sizeof(char))))
			return (0);
		i = 0;
		while (1)
		{
			if (read(fd, &buff[i], 1) == 0)
				return (1);
			if (buff[i++] == '\n')
				break ;
		}
		buff[i] = '\0';
		if (!check(buff))
			return (0);
		free(buff);
	}
	close(fd);
	return (1);
}

int		check(char *line)
{
	if (!(is_empty(line) || is_pattern(line)))
	{
		free(line);
		write(1, "Dict Error\n", 11);
		return (0);
	}
	else
		return (1);
}

int		is_empty(char *line)
{
	if (*line == '\n' && *(line + 1) == '\0')
		return (1);
	else
		return (0);
}

int		is_pattern(char *line)
{
	if (!ft_char_is_numeric(*line++))
		return (0);
	while (ft_char_is_numeric(*line))
		line++;
	while (*line == ' ')
		line++;
	if (!(*line++ == ':'))
		return (0);
	while (*line == ' ')
		line++;
	if (!ft_char_is_printable(*line++))
		return (0);
	while (ft_char_is_printable(*line))
		line++;
	if (*line != '\n')
		return (0);
	else
		return (1);
}
