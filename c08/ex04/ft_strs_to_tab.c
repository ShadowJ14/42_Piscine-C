/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 10:30:05 by lprates           #+#    #+#             */
/*   Updated: 2020/11/10 13:36:42 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void				str_cpy(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	*dst = 0;
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str *sizearr;

	i = 0;
	if (!(sizearr = malloc((ac + 1) * sizeof(t_stock_str))))
		return (0);
	while (i < ac)
	{
		sizearr[i].size = ft_strlen(av[i]);
		if (!(sizearr[i].str = malloc(sizearr[i].size + 1)))
			return (0);
		if (!(sizearr[i].copy = malloc(sizearr[i].size + 1)))
			return (0);
		str_cpy(sizearr[i].str, av[i]);
		str_cpy(sizearr[i].copy, av[i]);
		i++;
	}
	sizearr[i].str = 0;
	return (sizearr);
}
