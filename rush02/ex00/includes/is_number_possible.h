/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number_possible.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:48:44 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 20:04:14 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_NUMBER_POSSIBLE_H
# define IS_NUMBER_POSSIBLE_H

# include "libft.h"
# include <unistd.h>

int		is_number_possible(char *number, t_number *dict);
int		highest_length(t_number *dict);

#endif
