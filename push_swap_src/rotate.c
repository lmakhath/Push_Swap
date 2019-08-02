/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:37:39 by lmakhath          #+#    #+#             */
/*   Updated: 2018/01/09 14:37:41 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(int *a, int a_c)
{
	int j;

	j = 0;
	if (a_c > 1)
	{
		while (j < a_c - 1)
		{
			ft_swap(&a[j], &a[j + 1]);
			j++;
		}
	}
}

void	ra(int *a, int a_c, int i)
{
	int j;

	j = a_c;
	if (!(a_c >= i))
	{
		while (j < i - 1)
		{
			ft_swap(&a[j], &a[j + 1]);
			j++;
		}
	}
}

void	rr(int *a, int a_c, int i)
{
	ra(a, a_c, i);
	rb(a, a_c);
}
