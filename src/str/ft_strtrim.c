/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:08:59 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/20 15:09:04 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function allocates memory and trims a set of characters from the 
beginning and end of a string and stores the remainder in the allocated space*/
char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*last;
	int			i;

	if (s1 == NULL)
		return (NULL);
	last = s1 + ft_strlen(s1) - 1;
	i = 0;
	while (s1 <= last)
	{
		if (*s1 == set[i] && i < ft_strlen(set))
		{
			s1++;
			i = -1;
		}
		else if (*last == set[i] && i < ft_strlen(set))
		{
			last--;
			i = -1;
		}
		if (i < ft_strlen(set))
			i++;
		else
			break ;
	}
	return (ft_substr(s1, 0, last - s1 + 1));
}

/* This function calls ft_strtrim() with the given parameters and frees s1 */
char	*ft_strtrim_free(char const *s1, char const *set)
{
	char	*result;

	result = ft_strtrim(s1, set);
	ft_free((void **)&s1);
	return (result);
}
