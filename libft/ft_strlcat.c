/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:24:27 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/05 16:36:18 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
    size_t j;
	size_t	dlen;
	size_t	slen;

    dlen = ft_strlen(dst);
	slen = ft_strlen(src);
    i = 0;
    j = dlen;
	if (!dst || !dstsize)
		return (slen);
	if (dstsize <= dlen)
		return (slen + dstsize);
	while (src[i] && i < dstsize - dlen - 1)
	{
		dst[j] = src[i];
		i++;
        j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}
