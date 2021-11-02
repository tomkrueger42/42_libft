/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:12:36 by tomkrueger        #+#    #+#             */
/*   Updated: 2021/10/14 16:01:44 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function returns the size of the list */
int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
