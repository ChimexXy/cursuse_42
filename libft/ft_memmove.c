/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:38:09 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/13 05:20:21 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*srce;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	srce = (char *)src;
	if (dst == src)
		return (dst);
	if (dest > srce)
	{
		while (len-- > 0)
		{
			dest[len] = srce[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = srce[i];
			i++;
		}
	}
	return (dest);
}
