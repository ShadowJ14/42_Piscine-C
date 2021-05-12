/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dict_valid.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 07:18:32 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 20:04:08 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_DICT_VALID_H
# define IS_DICT_VALID_H

# define DICT "numbers.dict"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"

int		is_dict_valid(char *file);
int		check(char *line);
int		is_empty(char *line);
int		is_pattern(char *line);
int		ft_str_is_printable(char *str);

#endif
