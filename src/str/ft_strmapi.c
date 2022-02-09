/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:18:36 by tomkrueger        #+#    #+#             */
/*   Updated: 2022/02/09 19:51:53 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function allocates memory and iterates each character in a string using 
char (*f)(unsigned int, char) and stores that in the allocated memory */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	if (s == NULL)
		return (0);
	i = 0;
	new = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	while (s[i++])
		new[i - 1] = f(i - 1, s[i - 1]);
	new[i - 1] = 0;
	return (new);
}
