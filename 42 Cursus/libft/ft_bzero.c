/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyrikk <lyrikk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:40:18 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/03 20:42:40 by lyrikk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)s;
	while (i < n)
	{
		dest[i] = '0';
		i++;
	}
}

/*
int	main()
{
	char	str[] = "zeros";
	
	printf("%s\n", str);
	ft_bzero(str, 5);
	printf("%s\n", str);
	return (0);
}
*/