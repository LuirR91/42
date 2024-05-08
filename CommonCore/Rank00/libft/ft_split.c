/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:50:41 by luiribei          #+#    #+#             */
/*   Updated: 2024/05/08 14:18:48 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	trigger;
	int	count;

	i = 0;
	trigger = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (s[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	result = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				j = ft_strlen(s);
			else
				j = ft_strchr(s, c) - s;
			result[i] = ft_substr(s, 0, j);
			s += j;
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}

/*
int	main()
{
	int	i;
	char	*str;
	char	c;
	char	**big;

	i = 0;
	str = "hey there how you doing";
	c = ' ';
	big = ft_split(str, c);
	while (big[i])
	{
		printf("[%d]: %s\n", i, big[i]);
		i++;
	}
	free(big);
	return (0);
}
*/
