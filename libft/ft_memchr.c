/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 14:54:57 by lmakhath          #+#    #+#             */
/*   Updated: 2017/06/11 15:47:02 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s1;

	s1 = (unsigned char *)str;
	while (n > 0)
	{
		if (*s1 == (unsigned char)c)
			return (s1);
		else
			s1++;
		n--;
	}
	return (0);
}
