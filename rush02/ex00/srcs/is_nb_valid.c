/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_nb_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:53:02 by bpratas           #+#    #+#             */
/*   Updated: 2020/11/08 22:23:38 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_nb_valid.h"

int		is_nb_valid(char *number)
{
	while (*number != '\0')
	{
		if (*number >= '0' && *number <= '9')
			number++;
		else
		{
			write(1, "error\n", 6);
			return (0);
		}
	}
	return (1);
}
