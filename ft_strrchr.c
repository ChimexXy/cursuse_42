/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:45:19 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/15 11:24:50 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	c1;

	i = ft_strlen(s);
	p = (char *)s;
	c1 = (char)c;
	while (i >= 0)
	{
		if (p[i] == c1)
			return (p + i);
		i--;
	}
	if (c1 == '\0')
		return (p + i);
	return (NULL);
}
