/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:01:55 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/16 13:02:08 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function allocates memory and copies both strings joined together 
into it */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new = ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new == NULL)
		return (NULL);
	while (s1 != NULL && s1[i] != 0)
	{
		new[i] = s1[i];
		i++;
	}
	while (s2 != NULL && s2[j] != 0)
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = 0;
	return (new);
}

/* This function calls ft_strjoin() and frees the given parameters */
char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char	*new;

	new = ft_strjoin(s1, s2);
	if (s1 != NULL)
		free((void *)s1);
	s1 = NULL;
	if (s2 != NULL)
		free((void *)s2);
	s2 = NULL;
	return (new);
}
