/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:56:01 by tkruger           #+#    #+#             */
/*   Updated: 2022/03/09 02:24:10 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_free_array(char ***arr)
{
	char	**parser;
	size_t	i;

	parser = *arr;
	i = 0;
	while (parser[i] != NULL)
	{
		free(parser[i]);
		parser[i] = NULL;
		i++;
	}
	if (parser != NULL)
		free(parser);
	parser = NULL;
}
