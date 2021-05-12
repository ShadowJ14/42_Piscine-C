/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglerean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:25:23 by nglerean          #+#    #+#             */
/*   Updated: 2020/11/01 22:40:56 by bfalcao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		select_nbr(int *input, int m_size);
int		*random_str(char *str);
int		count_nbr(char *str);

int		main(int argc, char *argv[])
{
	int i;
	int var;

	if (argc == 2)
	{
		i = count_nbr(argv[1]);
		if (i < 4 || i % 4 != 0)
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i /= 4;
		var = select_nbr(random_str(argv[1]), i);
		if (var < 0)
		{
			write(1, "Error\n", 6);
			return (-1);
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (-1);
	}
}
