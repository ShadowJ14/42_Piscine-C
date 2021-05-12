/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:34:47 by lprates           #+#    #+#             */
/*   Updated: 2020/11/12 01:19:33 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		ft_strcpy(char *dst, char *from, char *until)
{
	while (from < until)
		*(dst++) = *(from++);
	*dst = 0;
}

int			check_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int			word_count(char *str, char *charset)
{
	int cnt;

	cnt = 0;
	while (*str)
	{
		if (!check_charset(*str, charset))
		{
			cnt++;
			while (*str && !check_charset(*str, charset))
				str++;
		}
		str++;
	}
	return (cnt);
}

char		**ft_split(char *str, char *charset)
{
	int		i;
	char	**ret;
	char	*start;

	ret = (char**)malloc(sizeof(char*) * word_count(str, charset) + 1);
	i = 0;
	while (*str)
	{
		if (!check_charset(*str, charset))
		{
			start = str;
			while (*str && !check_charset(*str, charset))
				str++;
			ret[i] = (char *)malloc(str - start + 1);
			ft_strcpy(ret[i++], start, str);
		}
		str++;
	}
	ret[i] = 0;
	return (ret);
}
