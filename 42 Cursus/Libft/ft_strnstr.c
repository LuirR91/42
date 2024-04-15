/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:34:00 by luiribei          #+#    #+#             */
/*   Updated: 2024/04/15 12:48:54 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *little, size_t len)
{
	size_t	i;
	
	i = 0;
	if (*little == '\0')
		return ((char *)str);
	else
	{
		while (i < len)
		{
			if (ft_strncmp((char *)&str[i], little, ft_strlen(little)) == 0)
			{
				if (i + ft_strlen(little) > len)
					return (NULL);
				return ((char *)str + i);
			}
			i++;
		}
	}
	return (NULL);
}

