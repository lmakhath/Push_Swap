/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 13:36:59 by lmakhath          #+#    #+#             */
/*   Updated: 2017/06/10 17:14:41 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	j = ft_strlen(str);
	if (!(dest = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (i <= j)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
