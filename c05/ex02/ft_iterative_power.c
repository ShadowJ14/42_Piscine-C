/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 22:26:43 by lprates           #+#    #+#             */
/*   Updated: 2020/11/06 23:36:22 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 0;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	while (i < power - 1)
	{
		nb = nb * res;
		i++;
	}
	return (nb);
}
