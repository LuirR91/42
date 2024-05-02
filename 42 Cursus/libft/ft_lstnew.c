/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:08:56 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/02 15:11:39 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lst_new(void *content)
{
	t_list	*node;
	
	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node ->next = NULL;
	return (node);
}
