/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_nb.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:01:25 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 20:53:50 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITE_NB_H
# define WRITE_NB_H

# include <unistd.h>
# include "libft.h"
# include "write_nb2.h"

void			write_nb(char *number, t_number *dict);
void			case_hundreds(char *number,
								t_number *dict,
								int *has_numbers_before);
void			case_tens(char *number,
							t_number *dict,
							int *has_numbers_before);
void			case_ones(char *number,
							int nb_len,
							t_number *dict,
							int *has_numbers_before);

#endif
