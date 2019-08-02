/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:30:25 by lmakhath          #+#    #+#             */
/*   Updated: 2017/08/01 11:30:51 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = NULL;
	if (s)
	{
		if (!(s1 = (char *)malloc(len + 1)))
			return (NULL);
		while (i < len)
		{
			s1[i] = s[start];
			i++;
			start++;
		}
		s1[i] = '\0';
	}
	return (s1);
}
