/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:57:07 by lprates           #+#    #+#             */
/*   Updated: 2020/11/08 21:04:14 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOAD2_H
# define LOAD2_H
# define DICT "numbers.dict"

# include <fcntl.h>
# include <stdlib.h>
# include "load.h"
# include "libft.h"

void	place_key(char *buff, int lenght, t_number **dict, int i);
void	place_value(char *buff, int lenght, t_number **dict, int i);
void	process_ptrs(char *buff);
void	clean_lines_value(char *buff, t_number *dict, int i);
void	clean_lines_key(char *buff, t_number *dict, int i);

int		g_eof;
char	*g_begin;
char	*g_end;
char	*g_tmp;

#endif
