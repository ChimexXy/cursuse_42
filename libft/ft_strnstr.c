/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:34:12 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/13 05:08:33 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	u;
	size_t	v;
	char	*p;

	u = 0;
	v = 0;
	p = (char *)haystack;
	if (needle[v] == '\0')
		return (p);
	while (haystack[u] != '\0' )
	{
		while (haystack[u + v] == needle[v] && haystack[u + v] != '\0' )
			v++;
		if (needle[v] == '\0' && u + v <= len)
			return (p + u);
		u++;
		v = 0;
	}
	return (NULL);
}

// int main()
// {
//     printf("%s\n", strnstr("hello", "el", 24));
// 	printf("%s\n", ft_strnstr("hello", "el", 24));
// }