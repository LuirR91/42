/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:50:18 by luiribei          #+#    #+#             */
/*   Updated: 2024/04/17 14:30:16 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *d;
	const char *s;
	
	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d > s)
	{
		while (n)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
