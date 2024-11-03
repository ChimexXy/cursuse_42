/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:24:27 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/03 10:41:35 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
// {
//     size_t dlen;
//     size_t slen;
//     size_t i;

//     dlen = ft_strlen(dst);
//     slen = ft_strlen(src);
//     if (dlen >= dstsize)
//         return (dstsize + slen);
//     i = dlen;
//     while (i < dstsize - 1 && src[i - dlen])
//     {
//         dst[i] = src[i - dlen];
//         i++;
//     }
//     dst[i] = '\0';
//     while (src[i - dlen])
//     {
//         dst[i] = src[i - dlen];
//         i++;
//     }
//     return (dlen + slen);
// }


size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
    if (dstsize == 0 )
        return(dlen);
	if (dstsize <= dlen)
		return (slen + dstsize);
	while (src [i - dlen] && i < dstsize - dlen - 1)
	{
		dst[i] = src[i - dlen];
		i++;
	}
	dst[i] = '\0';
	return (dlen + slen);
}


#include <stdio.h>
#include <string.h>
int main()
{
	char dest[] = "network";
	char src[] = "socity";
    int i = 0;
    int j = 0;
	printf("%zu\n", ft_strlcat(dest, src, 4));
    while(i < ft_strlcat(dest, src, 4))
    {
            if(dest[i] == '\0')
            {
                dest[i] = src[j];
                j++;
            }
        i++;
    }
    dest[i] = '\0';
	printf("%s", dest);
}