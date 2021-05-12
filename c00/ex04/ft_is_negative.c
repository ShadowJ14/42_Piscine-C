/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:53:48 by lprates           #+#    #+#             */
/*   Updated: 2020/10/23 16:03:43 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char sign;

	if (n < 0)
	{
		sign = 'N';
		write(1, &sign, 1);
	}
	else
	{
		sign = 'P';
		write(1, &sign, 1);
	}
}
