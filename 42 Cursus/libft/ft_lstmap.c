/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:57:49 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/02 17:07:26 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	
	if(!lst)
		return ;
	new_list = NULL;
	while (lst)
	{
		if (f)
			new_node = lstnew(f(lst->content));
		else
			new_node = lstnew(lst->content);
		if (!new_node)
		{
			lstclear(&new_list, del);
			return (NULL);
		}
		lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
