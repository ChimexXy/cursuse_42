/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:08:34 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/06 00:18:19 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	size_t i;
	char *ptr;

	i = 0;
	ptr = malloc(ft_strlen(s1) + 1);
    if(!ptr)
        return(NULL);
	while(s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
    ptr[i] = '\0';
	return (ptr);
}
