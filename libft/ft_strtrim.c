/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:57:02 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/11 18:42:32 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	check(char const s, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == s)
			return (1);
		i++;
	}
	return (0);
}

size_t	check_start(char const *str, char const *s)
{
	size_t	i;

	i = 0;
	while (check(str[i], s))
		i++;
	return (i);
}

size_t	check_end(char const *str, char const *s)
{
	size_t	i;

	i = ft_strlen(str);
	while (check(str[i - 1], s))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*ptr;

	if (!s1 || !set)
		return (ft_strdup(""));
	i = check_start(s1, set);
	j = check_end(s1, set);
	k = 0;
	ptr = malloc(j - i + 1);
	if(ft_strncmp(s1, set, 0) || !ptr)
		return (NULL);
	if (s1 == set)
		return ("\0");
	while (s1[i] && i < j)
	{
		ptr[k] = s1[i];
		i++;
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
