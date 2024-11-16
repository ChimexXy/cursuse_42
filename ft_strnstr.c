/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:34:12 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/15 11:23:35 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	u;
	size_t	v;
	char	*p;

	if (!haystack && len == 0)
		return (NULL);
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
