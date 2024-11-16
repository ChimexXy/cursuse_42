/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:36:18 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/16 11:12:44 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srce;

	i = 0;
	if (dst == src)
		return (dst);
	dest = (unsigned char *)dst;
	srce = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dst);
}
