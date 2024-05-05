/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyrikk <lyrikk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:00:19 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/03 20:41:32 by lyrikk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n)
	{
		*ptr++ = c;
		n--;
	}
	return (str);
}

/*
int	main()
{
	char str [] = "abc";

	ft_memset(str, "o", 3);
	printf("%s\n", str);
	return (0);
}
*/