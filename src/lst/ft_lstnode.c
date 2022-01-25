/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:24:24 by tkruger           #+#    #+#             */
/*   Updated: 2022/01/25 16:30:09 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This f() returns the number of the node of the list */
int	ft_lstnode(t_list *lst, t_list *node)
{
	int	counter;

	counter = 0;
	if (lst == NULL || node == NULL)
		return (-1);
	while (lst != NULL && lst != node)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}
