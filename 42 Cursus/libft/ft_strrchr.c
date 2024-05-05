/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyrikk <lyrikk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:55:54 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/03 20:38:41 by lyrikk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);
	while (str[i] >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (0);
}

/*
int	main()
{
	printf("%s\n", ft_strrchr("carrot", 'o'));
	return (0);
}
*/