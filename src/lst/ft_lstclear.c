/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 22:47:41 by tomkrueger        #+#    #+#             */
/*   Updated: 2022/02/09 16:46:42 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function deletes a list using void (*del)(void *) */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*next;

	p = *lst;
	if (p == NULL)
		return ;
	while (p != NULL)
	{
		next = p->next;
		ft_lstdelone(p, del);
		p = next;
	}
	*lst = NULL;
}
