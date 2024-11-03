/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:57:02 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/03 14:06:08 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t check(char const s, char const *str)
{
	size_t i;

	i = 0;
	while(str[i])
	{
		if (str[i] == s )
			return(1);
		i++;
	}
	return (0);
}

size_t check_start(char const *str, char const *s)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (check(str[i], s))
	{
		i++;
		j++;
	}
	return (i);
}

size_t check_end(char const *str, char const *s)
{
	size_t i;
	size_t j;

	i = ft_strlen(str);
	j = 0;
	while(check(str[i - 1], s))
	{
		i--;
		j++;
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
	size_t k;
	char *ptr;

    i = check_start(s1, set) ;
    j = check_end(s1, set);
	k = 0;
	ptr = malloc(ft_strlen(s1) - (ft_strlen(set) * 2));
    if (s1 == set)
        return ("");
    if (!s1 || !set)
        return (NULL);
    while(s1[i] && i < j)
	{
        ptr[k] = s1[i];
		i++;
		k++;
	}
	ptr[k] = '\0';
	return(ptr);
}

int main()
{
	printf("%s\n", ft_strtrim("ABCdsfABC", "ABC"));
}