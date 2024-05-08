/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:37:31 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/06 10:18:58 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1 + i);
	while (ft_strchr(set, s1[i + len]))
		len--;
	str = ft_substr(s1, i, len + 1);
	if (!str)
		return (NULL);
	return (str);
}

/*
int	main()
{
	char	*s1;
	char	*set;

	s1 = "abbbababab123ab45ababababa";
	set = "ab";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
*/
