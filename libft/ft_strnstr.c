/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 12:24:44 by lmakhath          #+#    #+#             */
/*   Updated: 2017/08/17 13:19:25 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	while (big[a] != '\0')
	{
		b = a;
		c = 0;
		if (little[c] == '\0')
			return ((char*)(&big[a]));
		while (big[b] && little[c] && big[b] == little[c] && b <= len)
		{
			b++;
			c++;
			if (little[c] == '\0')
				return ((char*)(&big[a]));
		}
		a++;
	}
	return (0);
}
