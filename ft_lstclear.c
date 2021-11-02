/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 22:47:41 by tomkrueger        #+#    #+#             */
/*   Updated: 2021/10/14 15:56:55 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function deletes a list using void (*del)(void *) */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*next;

	p = *lst;
	if (!p)
		return ;
	while (p)
	{
		next = p->next;
		ft_lstdelone(p, del);
		p = next;
	}
	*lst = 0;
}
