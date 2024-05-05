/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyrikk <luiscjribeiro>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:02:27 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/05 14:06:07 by lyrikk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*news;

	i = 0;
	j = 0;
	news = (char *)malloc(sizeof(*s) * (len + 1));
	if (news == NULL)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			news[j] = s[i];
			j++;
		}
		i++;
	}
	news[j] = 0;
	return (news);
}

/*
int	main()
{
	const char	*str;

	str = "12345";
	printf("%s\n", ft_substr(str, 2, 3));
	return (0);
}
*/