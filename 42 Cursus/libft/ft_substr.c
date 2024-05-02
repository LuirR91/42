/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:02:27 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/02 17:48:51 by luiribei         ###   ########.fr       */
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
