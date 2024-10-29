/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:34:12 by mozahnou          #+#    #+#             */
/*   Updated: 2024/10/27 13:58:26 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	u;
	size_t	v;

	u = 0;
	v = 0;
    if (haystack == NULL || needle == NULL)
    {
        return (NULL);
    }
	if (needle[v] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[u] != '\0' )
	{

        while (haystack[u + v] == needle[v] && haystack[u + v] != '\0' )
		{
		    v++;
		}
        
		if (needle[v] == '\0' && u + v <= len)
		{
		    return ((char *)haystack + u);
        }
        
		u++;
		v = 0;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s\n", ft_strnstr(NULL, NULL, 0));
	//printf("%s", strnstr("evehello ryone", NULL, 3));
}