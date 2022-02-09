/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:03:12 by tomkrueger        #+#    #+#             */
/*   Updated: 2022/02/09 16:46:13 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function adds an element to the back of a list */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	p = ft_lstlast(*lst);
	if (p == NULL)
		*lst = new;
	else
		p->next = new;
	new->next = NULL;
}
