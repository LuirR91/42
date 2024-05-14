/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyrikk <luiscjribeiro>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:40:31 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/14 16:00:57 by lyrikk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbr_elements, size_t element_size)
{
	void	*p;
	size_t	size;

	size = nbr_elements * element_size;
	if (size && element_size && size > (UINT_MAX / element_size))
		return (NULL);
	p = (void *)malloc(size);
	if (!p)
		return (NULL);
	ft_bzero(p, size);
	return (p);
}
