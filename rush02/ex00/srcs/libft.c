/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 09:27:11 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 22:05:37 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int		ft_char_is_numeric(char c)
{
	if (!('0' <= c && c <= '9'))
		return (0);
	else
		return (1);
}

int		ft_char_is_printable(char c)
{
	if (!(' ' <= c && c <= '~'))
		return (0);
	else
		return (1);
}

int		is_white_space(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}
