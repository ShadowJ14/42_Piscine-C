/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 21:43:41 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 22:07:11 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "load.h"

int			count_lines(char *file)
{
	char	*tmp;
	int		i;
	int		count;
	int		fd;

	i = 0;
	count = 0;
	if (!(tmp = malloc(1024 + 1)))
		return (0);
	fd = open(file, O_RDONLY);
	while (read(fd, &tmp[i], 1))
	{
		if (tmp[i] == '\n' && tmp[i - 1] == '\n')
			count--;
		if (tmp[i] == '\n' && i != 0)
			count++;
		i++;
	}
	free(tmp);
	close(fd);
	return (count);
}

t_number	*build_dict(int line_count, char **buff, t_number *dict)
{
	int i;

	i = 0;
	while (i < line_count)
	{
		clean_lines_key(buff[i], dict, i);
		clean_lines_value(buff[i], dict, i);
		i++;
	}
	dict[line_count].number = 0;
	dict[line_count].letters = 0;
	while (i <= line_count)
		free(buff[i++]);
	return (dict);
}

t_number	*prepare_dict(t_number *dict, int line_count)
{
	int a;

	a = 0;
	if (!(dict = malloc((line_count + 1) * sizeof(t_number))))
		return (0);
	while (a < line_count)
	{
		dict[a].number = "0";
		dict[a].letters = "0";
		a++;
	}
	return (dict);
}

t_number	*load(char *file)
{
	int			line_count;
	char		**buff;
	int			i;
	int			fd;
	t_number	*dict;

	i = 0;
	line_count = count_lines(file);
	dict = 0;
	dict = prepare_dict(dict, line_count);
	fd = open(file, O_RDONLY);
	if (!(buff = malloc(1024 * line_count)))
		return (0);
	while ((buff[i] = readline(fd)))
	{
		if (g_eof++)
			break ;
		if (buff[i][0] == 0)
			i--;
		i++;
	}
	close(fd);
	return (build_dict(line_count, buff, dict));
}

char		*readline(int fd)
{
	char	*line;
	int		i;

	i = 0;
	if (!(line = malloc(1024 + 1)))
		return (0);
	while (read(fd, &line[i], 1))
	{
		g_eof = 0;
		if (i == 1024)
		{
			free(line);
			return (0);
		}
		if (!(line[0] >= '0' && line[0] <= '9'))
		{
			line[0] = 0;
			return (line);
		}
		if (line[i] == '\n' && (line[i] = 0) + 1)
			break ;
		i++;
	}
	return (line);
}
