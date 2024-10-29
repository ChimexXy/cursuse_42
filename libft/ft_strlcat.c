/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:24:27 by mozahnou          #+#    #+#             */
/*   Updated: 2024/10/27 17:22:41 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t dlen;
    size_t slen;
    size_t i;

    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    if (dlen >= dstsize)
        return (dstsize + slen);
    i = dlen;
    while (i < dstsize - 1 && src[i - dlen])
    {
        dst[i] = src[i - dlen];
        i++;
    }
    dst[i] = '\0';
    while (src[i - dlen])
    {
        dst[i] = src[i - dlen];
        i++;
    }
    return (dlen + slen);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char dest[] = "hello";
	char src[] = "world";
	printf("%zu\n", ft_strlcat(dest, src, 15));
	printf("%lu", strlcat(dest, src, 15));
	
}