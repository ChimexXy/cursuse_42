/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:51:38 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/12 02:49:21 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
    char *ptr;

	i = 0;
    ptr = (char *)s;
	while (s[i])
	{
		if (s[i] == c)
			return (ptr + i);
		i++;
	}
    if (s[i] == c)
        return (ptr + i);
	return (NULL);
}
