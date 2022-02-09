/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:03:04 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/09 20:04:39 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function splits a string at all delimiting occurences of character c */
char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		chrs;
	int		r;

	i = 0;
	r = 0;
	if (s == NULL)
		return (NULL);
	result = ft_calloc(ft_count_char((char *)s, c), sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		chrs = 0;
		while (s[i] != '\0' && s[i] != c && chrs++ >= 0)
			i++;
		if (chrs > 0)
			result[r++] = ft_substr(s, i - chrs, chrs);
		while (s[i] && s[i] == c)
			i++;
	}
	result[r] = 0;
	return (result);
}
