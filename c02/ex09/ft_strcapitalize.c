/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:32:23 by lprates           #+#    #+#             */
/*   Updated: 2020/10/29 15:05:14 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_alpha(char str)
{
	if (str < 65 || (str > 90 &&
		str < 97) || str > 122)
		return (0);
	return (1);
}

int		str_numeric(char str)
{
	int i;

	i = 0;
	if (str < 48 || str > 57)
		return (0);
	return (1);
}

int		str_lowercase(char str)
{
	if (str < 97 || str > 122)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str_alpha(str[i - 1]) == 0 &&
			str_numeric(str[i - 1]) == 0) && str_lowercase(str[i]) == 1))
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' &&
		(str_alpha(str[i - 1]) == 1 || str_numeric(str[i - 1]) == 1))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
