/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:36:18 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/13 05:01:27 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*dest;
	char	*srce;

	i = 0;
	j = 0;
	if (dst == src)
		return (dst);
	dest = (char *)dst;
	srce = (char *)src;
	while (n > 0)
	{
		dest[i] = srce[j];
		i++;
		j++;
		n--;
	}
	return (dst);
}
