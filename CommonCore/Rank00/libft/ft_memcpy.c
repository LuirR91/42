/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:25:24 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/06 10:25:49 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

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

/*
int	main()
{
	char	src[] = "12345";
	char	dest[10] = "12345";

	ft_memcpy(dest, src, 3);
	printf("%s\n", dest);
	return (0);
}
*/
