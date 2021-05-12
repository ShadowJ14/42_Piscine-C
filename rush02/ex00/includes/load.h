/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:16:53 by lprates           #+#    #+#             */
/*   Updated: 2020/11/08 21:02:29 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOAD_H
# define LOAD_H
# define DICT "numbers.dict"

# include "libft.h"
# include "load2.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int			count_lines(char *file);
t_number	*prepare_dict(t_number *dict, int line_count);
t_number	*load(char *file);
char		*readline(int file);
t_number	*build_dict(int line_count, char **buff, t_number *dict);

int		g_eof;
char	*g_begin;
char	*g_end;
char	*g_tmp;

#endif
