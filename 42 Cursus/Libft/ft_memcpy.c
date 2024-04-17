/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:25:24 by luiribei          #+#    #+#             */
/*   Updated: 2024/04/17 11:14:29 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	const char *s;
	char *d;
	
	i = 0;
	s = (char *)src;
	d = dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;		
	}
	return (dest);	
}
