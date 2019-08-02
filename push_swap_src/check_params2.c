/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:04:21 by lmakhath          #+#    #+#             */
/*   Updated: 2018/01/29 15:04:26 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_doubles(int argc, char **argv, int i)
{
	int j;

	j = 2;
	while (i < argc)
	{
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int		check_numbers(int argc, char **argv, int i)
{
	int j;

	j = 0;
	while (i < argc)
	{
		if (argv[i][0] == '-')
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
