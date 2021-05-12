/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unload.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 07:12:12 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 22:07:25 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unload.h"

void		unload(t_number *dict)
{
	while (dict->number != 0)
	{
		free(dict->number);
		free(dict->letters);
		dict++;
	}
	free(dict->number);
	free(dict->letters);
	return ;
}
