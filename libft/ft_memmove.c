/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 14:54:07 by lmakhath          #+#    #+#             */
/*   Updated: 2017/07/22 13:26:43 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (str1 > str2)
	{
		i = n;
		while (i > 0)
		{
			i--;
			s1[i] = s2[i];
		}
	}
	else
	{
		while (n > i)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (s1);
}
