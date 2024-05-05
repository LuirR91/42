/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyrikk <luiscjribeiro>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:28:32 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/05 14:04:40 by lyrikk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				result;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] == str2[i] && str1[i] && str2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	result = str1[i] - str2[i];
	if (result > 0)
		return (1);
	if (result < 0)
		return (-1);
	return (0);
}

/*
int	main()
{
	char	*str1;
	char	*str2;

	str1 = "abcd";
	str2 = "abcd";
	
	printf("%d\n", ft_memcmp(str1, str2, 6));
	return (0);
}
*/