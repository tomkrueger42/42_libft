/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:03:12 by tomkrueger        #+#    #+#             */
/*   Updated: 2021/10/14 15:55:45 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function adds an element to the back of a list */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	p = ft_lstlast(*lst);
	if (!p)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	p->next = new;
	new->next = NULL;
}
