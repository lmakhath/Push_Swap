/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:47:33 by lmakhath          #+#    #+#             */
/*   Updated: 2018/01/18 12:47:41 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_alpha(int c, int c2)
{
	if (c > c2)
		return (1);
	else if (c == c2)
		return (0);
	return (-1);
}

int		check_max(char *str)
{
	char	*max;
	int		i;

	max = "2147483647";
	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
			return (1);
		else if (check_alpha(max[i], str[i]) == -1)
			return (0);
		else if (check_alpha(max[i], str[i]) == 1)
			return (1);
		i++;
	}
	return (1);
}

int		check_min(char *str)
{
	char	*min;
	int		i;

	min = "-2147483648";
	i = 0;
	while (str[i])
	{
		if (str[0] != '-')
			return (0);
		else if (check_alpha(min[i], str[i]) == -1)
			return (0);
		else if (check_alpha(min[i], str[i]) == 1)
			return (1);
		i++;
	}
	return (1);
}

int		check_overflow(int argc, char **argv, int i)
{
	while (i < argc)
	{
		if (ft_strlen(argv[i]) == 10)
		{
			if (check_max(argv[i]) == 0)
				return (0);
		}
		else if (ft_strlen(argv[i]) == 11)
		{
			if (check_min(argv[i]) == 0)
				return (0);
		}
		else if (ft_strlen(argv[i]) > 11)
			return (0);
		i++;
	}
	return (1);
}
