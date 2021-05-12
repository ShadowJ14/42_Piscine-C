/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_nb2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:23:58 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 22:07:48 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "write_nb2.h"

void		find_ones(char number, t_number *dict)
{
	char	*number_checked;

	number_checked = 0;
	while (dict->number != 0)
	{
		number_checked = dict->number;
		if (*number_checked == number && *(number_checked + 1) == '\0')
		{
			write(1, dict->letters, ft_strlen(dict->letters));
			return ;
		}
		dict++;
	}
}

void		find_tens(char *number, t_number *dict)
{
	char	*number_checked;

	number_checked = 0;
	while (dict->number != 0)
	{
		number_checked = dict->number;
		if (*number_checked == *number &&
			*(number_checked + 1) == *(number + 1) &&
			ft_strlen(number_checked) == 2)
		{
			write(1, dict->letters, ft_strlen(dict->letters));
			return ;
		}
		else if (*number_checked == *number &&
			*number != '1' &&
			*(number_checked + 1) == '0' &&
			ft_strlen(number_checked) == 2)
		{
			write(1, dict->letters, ft_strlen(dict->letters));
			return ;
		}
		dict++;
	}
}

void		find_hundreds(char *number, int len, t_number *dict)
{
	char	*number_checked;

	if (len < 2)
		return ;
	if (*number == '0' && *(number - 1) == '0' && *(number - 2) == '0')
		return ;
	number_checked = 0;
	while (dict->number != 0)
	{
		number_checked = dict->number;
		if (ft_strlen(number_checked) == len && check_format(number_checked))
		{
			write(1, " ", 1);
			write(1, dict->letters, ft_strlen(dict->letters));
			return ;
		}
		dict++;
	}
}

int			check_format(char *number)
{
	if (*number++ != '1')
		return (0);
	else
	{
		while (*number)
		{
			if (*number != '0')
				return (0);
			number++;
		}
	}
	return (1);
}
