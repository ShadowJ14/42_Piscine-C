/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:29:50 by lprates           #+#    #+#             */
/*   Updated: 2020/11/03 20:39:03 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		number;

	i = 0;
	number = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
		*str == '\v' || *str == '\f' || *str == '\r')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			i++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = number + (*str - '0');
		str++;
	}
	if (!(i % 2 == 0))
		number = number * (-1);
	return (number);
}
