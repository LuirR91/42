/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiscjribeiro@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:40:31 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/02 14:40:34 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
	void	*p;

	p = malloc(n * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, n);
	return (p);
}
