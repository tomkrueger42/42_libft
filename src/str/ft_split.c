/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:03:04 by tkruger           #+#    #+#             */
/*   Updated: 2021/12/03 17:12:29 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function splits a string at all delimiting occurences of character c */
char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		r;

	i = 0;
	r = 0;
	result = malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (result == NULL || !s)
		return (NULL);
	while (s[i] && result)
	{
		j = 0;
		while (s[i] && s[i] != c && j++ >= 0)
			i++;
		if (j)
			result[r++] = ft_substr(s, i - j, j);
		while (s[i] && s[i] == c)
			i++;
	}
	result[r] = 0;
	return (result);
}
