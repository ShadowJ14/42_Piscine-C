/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglerean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:27:48 by nglerean          #+#    #+#             */
/*   Updated: 2020/11/01 22:41:21 by bfalcao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		valid(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '4') && i % 2 == 0)
			return (0);
		if ((str[i] != ' ' && i % 2 == 1) || i > 30)
			return (0);
		i++;
	}
	return (1);
}

int		count_nbr(char *str)
{
	int i;

	if (!valid(str))
		return (-1);
	i = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '4')
			i++;
		str++;
	}
	return (i);
}

int		*random_str(char *str)
{
	int i;
	int *rdom;

	if (!(rdom = malloc(sizeof(int) * (count_nbr(str)))))
		return (NULL);
	i = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '4')
		{
			rdom[i] = *str - '0';
			i++;
		}
		str++;
	}
	return (rdom);
}
