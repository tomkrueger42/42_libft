/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 11:06:00 by tomkrueger        #+#    #+#             */
/*   Updated: 2021/10/14 16:00:40 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function creates a new list based on the iteration of lst */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newel;

	newlst = 0;
	while (lst)
	{
		newel = ft_lstnew(f(lst->content));
		if (!newel)
		{
			ft_lstclear(&newlst, del);
			return (newlst);
		}
		ft_lstadd_back(&newlst, newel);
		lst = lst->next;
	}
	return (newlst);
}
