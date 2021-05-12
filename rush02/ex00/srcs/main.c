/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:13:21 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 22:24:42 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char *argv[])
{
	char		*number;
	char		*file;
	t_number	*dict;

	if (!(argc == 2 || argc == 3))
		return (1);
	number = (argc == 2) ? argv[1] : argv[2];
	file = (argc == 3) ? argv[1] : DICT;
	if (!is_nb_valid(number))
		return (2);
	if (!is_dict_valid(file))
		return (3);
	dict = load(file);
	if (!is_number_possible(number, dict))
		return (4);
	write_nb(number, dict);
	unload(dict);
	free(dict);
	return (0);
}
