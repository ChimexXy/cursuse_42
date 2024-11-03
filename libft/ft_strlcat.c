/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:24:27 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/03 12:51:17 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);

    if (dstsize == 0 )
        return(dlen - 1);
	if (dstsize <= dlen)
		return (slen + dstsize);
    i = 0;
	while (src [i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dlen + slen);
}


// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[] = "network";
// 	char src[] = "socity";
//     int i = 0;
//     int j = 0;
// 	printf("%zu\n", ft_strlcat(dest, src, 0));
//     while(i <= ft_strlcat(dest, src, 0))
//     {
//         printf("%c", dest[i]);
//         i++;
//     }
	
// }