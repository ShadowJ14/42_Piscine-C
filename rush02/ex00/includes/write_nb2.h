/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_nb2.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:59:22 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 20:30:51 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITE_NB2_H
# define WRITE_NB2_H

# include <unistd.h>
# include "libft.h"

void			find_ones(char number, t_number *dict);
void			find_tens(char *number, t_number *dict);
void			find_hundreds(char *number, int len, t_number *dict);
int				check_format(char *number);

#endif
