/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:16:05 by lprates           #+#    #+#             */
/*   Updated: 2020/11/05 11:58:21 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftswap(char **a, char **b)
{
	char *tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 < *s2)
			return (-1);
		if (*s1++ > *s2++)
			return (1);
	}
	return (0);
}

void	ft_print_program_name(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j < argc - 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) == 1)
			{
				ftswap(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		i = 1;
		j++;
	}
	i = 0;
	while (++i < argc)
		ft_print_program_name(argv[i]);
}
