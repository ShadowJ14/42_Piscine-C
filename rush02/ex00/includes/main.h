/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:44:02 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 20:47:19 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# define DICT "numbers.dict"
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

int			is_nb_valid(char *number);
int			is_dict_valid(char *file);
t_number	*load(char *file);
int			is_number_possible(char *number, t_number *dict);
void		write_nb(char *number, t_number *dict);
void		unload(t_number *dict);

#endif
