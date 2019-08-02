/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:29:28 by lmakhath          #+#    #+#             */
/*   Updated: 2018/01/09 14:29:30 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_arr(int *a, int i, int a_c)
{
	int j;

	j = 0;
	ft_putchar('\n');
	while (j < i)
	{
		if (j >= a_c)
		{
			ft_putstr("\e[32m");
			ft_putnbr(a[j]);
			ft_putstr("\e[0m");
			ft_putchar('\n');
		}
		j++;
	}
	ft_putstr("_\na\n\n");
	j = 0;
	while (a_c > j)
	{
		ft_putstr("\e[35m");
		ft_putnbr(a[j++]);
		ft_putchar('\n');
		ft_putstr("\e[0m");
	}
	ft_putstr("_\nb\n");
}
