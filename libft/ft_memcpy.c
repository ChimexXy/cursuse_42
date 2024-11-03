/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:36:18 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/02 03:15:40 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
    size_t j;
	char	*dest;
	char	*srce;

	dest = (char *)dst;
	srce = (char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n > 0)
    {
        dest[i] = srce[j];
        i++;
        j++;
        n--;
    }
	return (dest);
}
