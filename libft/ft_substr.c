/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:56:58 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/02 04:36:20 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *ptr;

	i = 0;
	j = start;
	ptr = malloc(len + 1);
	if(ft_strlen(s) < start + len)
	{
		return (NULL);
	}
	while(i < len)
	{
		ptr[i] = s[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}
