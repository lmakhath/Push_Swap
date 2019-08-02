/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:03:58 by lmakhath          #+#    #+#             */
/*   Updated: 2018/01/29 15:04:07 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		check_split_params(char **str, int i)
{
	char	**str2;
	int		j;

	j = 0;
	str2 = ft_strsplit(str[1], ' ');
	while (str2[j])
		j++;
	if (check_numbers(j, str2, i))
	{
		if (check_doubles(j, str2, i))
		{
			if (check_overflow(j, str2, i))
				return (1);
		}
	}
	return (0);
}

int		check_params(int argc, char **str, int i)
{
	if (check_numbers(argc, str, i))
	{
		if (check_doubles(argc, str, i))
		{
			if (check_overflow(argc, str, i))
				return (1);
		}
	}
	return (0);
}

int		check_all2(int argc, char **argv)
{
	int n;

	if (argc == 2)
		n = check_split_params(argv, 0);
	else
		n = check_params(argc, argv, 1);
	return (n);
}

int		check_all(int argc, char **argv)
{
	int n;

	if ((n = check_all2(argc, argv)) == 0)
		ft_putstr("Error");
	return (n);
}
