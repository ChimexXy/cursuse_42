/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:56:58 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/11 18:38:56 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *ptr;

	i = 0;
	if(!s)
		return(NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if(ft_strlen(s) <= start)
		len = 0;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while(i < len)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}

// {
// 	unsigned int	i;
// 	size_t			slen;
// 	char			*ptr;

// 	i = 0;
// 	if (!s)
// 		return (NULL);
// 	slen = ft_strlen(s);
// 	if (len > slen - start)
// 	{
// 		len = slen - start;
// 	}
// 	if (start > slen)
// 		len = 0;
// 	ptr = malloc(1 * len + 1);
// 	if (ptr == NULL)
// 		return (NULL);
// 	while (i < len && s[start + i])
// 	{
// 		ptr[i] = s[i + start];
// 		i++;
// 	}
// 	ptr[i] = '\0';
// 	return (ptr);
// }