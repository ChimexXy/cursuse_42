/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:46:42 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/13 05:14:34 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	s2;

	i = 0;
	s1 = (unsigned char *)s;
	s2 = (unsigned char)c;
	while (n > 0)
	{
		if (s1[i] == s2)
			return (s1 + i);
		s1++;
		n--;
	}
	return (NULL);
}
