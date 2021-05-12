/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number_possible.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:42:42 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 22:22:21 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_number_possible.h"

int		is_number_possible(char *number, t_number *dict)
{
	if (ft_strlen(number) - 2 <= highest_length(dict))
		return (1);
	else
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
}

int		highest_length(t_number *dict)
{
	int highest;
	int tmp;

	highest = 0;
	while (dict->number != 0)
	{
		tmp = ft_strlen(dict->number);
		if (tmp > highest)
			highest = tmp;
		dict++;
	}
	return (highest);
}
