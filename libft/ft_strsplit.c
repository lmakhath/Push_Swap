/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 13:32:22 by lmakhath          #+#    #+#             */
/*   Updated: 2017/08/10 14:24:43 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wc(const char *s, char c)
{
	int n;
	int i;

	n = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i + 1] == c && s[i] != c) || (s[i] != c && s[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		w_len;
	int		j;
	char	**str;

	if (!s || !(str = (char **)malloc(sizeof(char *) * ft_wc(s, c) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s[j])
	{
		w_len = 0;
		if ((s[j] != c && s[j - 1] == c) || (s[j] != c && j == 0))
		{
			while (s[j + w_len] != c && s[j + w_len] != '\0')
				w_len++;
			str[i++] = ft_strsub(s, j, w_len);
		}
		j++;
	}
	str[i] = NULL;
	return (str);
}
