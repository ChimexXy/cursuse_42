/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:09:34 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/16 11:13:43 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	m;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	m = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i])
		ptr[m++] = s1[i++];
	while (s2[j])
		ptr[m++] = s2[j++];
	ptr[m] = '\0';
	return (ptr);
}
