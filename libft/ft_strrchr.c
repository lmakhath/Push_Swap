/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 12:15:35 by lmakhath          #+#    #+#             */
/*   Updated: 2017/06/11 17:47:28 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(str);
	while (*str == '\0')
		return (0);
	while (*str)
		str++;
	while (j > i)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		else
		{
			j--;
			str--;
		}
	}
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (0);
}
