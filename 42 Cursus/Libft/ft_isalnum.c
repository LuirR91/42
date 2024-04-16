/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:50:49 by luiribei          #+#    #+#             */
/*   Updated: 2024/04/12 13:30:23 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 0 && i <= 9) ||
	(i >= 'a' && i <= 'z') ||
	(i >= 'A' && i <= 'Z'))
		return (1);
	return (0);
}