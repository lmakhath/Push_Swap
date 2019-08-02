/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:26:39 by lmakhath          #+#    #+#             */
/*   Updated: 2018/01/09 14:26:42 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_back(int *a, int a_c, int i)
{
	int big;
	int pos;
	int ans;

	big = biggest(a, a_c);
	pos = position_b(a, big, a_c);
	ans = (i - a_c) - ((pos - a_c) * 2);
	if (ans >= 0)
	{
		while (a[0] != big)
		{
			rb(a, a_c);
			ft_putstr("rb\n");
		}
	}
	else
	{
		while (a[0] != big)
		{
			rrb(a, a_c);
			ft_putstr("rrb\n");
		}
	}
	a_c = push_back2(a, a_c, i);
	return (a_c);
}

int		push_back2(int *a, int a_c, int i)
{
	while (a_c > 0)
	{
		if (a[0] < a[a_c])
		{
			if (a[i - 1] < a[a_c] && a[i - 1] > a[0])
			{
				rra(a, a_c, i); 
				ft_putstr("rra\n");
			}
			else
			{
				a_c = pa(a, a_c);
				ft_putstr("pa\n");
			}
		}
		else if (a[0] > a[a_c])
		{
			ra(a, a_c, i);
			ft_putstr("ra\n");
		}
	}
	if (check_sort(a, a_c, i) == 0)
	{
		rra(a, a_c, i); 
		ft_putstr("rra\n");
	}
	return (a_c);
}
