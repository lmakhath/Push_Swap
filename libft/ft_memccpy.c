/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 11:37:28 by lmakhath          #+#    #+#             */
/*   Updated: 2017/07/27 14:54:49 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *dst;
	unsigned char *s2;

	dst = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	while (n > 0)
	{
		*dst = *s2;
		if (*dst == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		s2++;
		dst++;
		n--;
	}
	return (0);
}
