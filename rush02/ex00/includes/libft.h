/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:22:20 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 19:03:08 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef struct	s_number
{
	char	*number;
	char	*letters;
}				t_number;

int				ft_strlen(char *str);
int				ft_char_is_numeric(char c);
int				ft_char_is_printable(char c);
int				is_white_space(char c);

#endif
