/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 22:10:32 by lprates           #+#    #+#             */
/*   Updated: 2020/11/06 23:36:32 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int factorial;

	factorial = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (factorial == 1)
		return (1);
	return (factorial * ft_recursive_factorial(factorial - 1));
}
