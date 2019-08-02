/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 14:56:41 by lmakhath          #+#    #+#             */
/*   Updated: 2017/11/09 11:14:06 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)str;
	s2 = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && n - 1 > i)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		i++;
	}
	return (*s1 - *s2);
}
