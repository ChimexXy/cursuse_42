/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:08:34 by mozahnou          #+#    #+#             */
/*   Updated: 2024/10/28 19:29:40 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(const char *s1)
{
	size_t i;
	char *ptr;

	i = 0;
	ptr = malloc(ft_strlen(s1) + 1);
	while(s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}
#include <string.h>
#include <stdio.h>
int main()
{
	printf("%s\n", strdup("hello"));
	printf("%s", ft_strdup("hello"));
}