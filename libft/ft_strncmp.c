/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:26:35 by mozahnou          #+#    #+#             */
/*   Updated: 2024/10/26 15:58:30 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
    if(s1 == NULL || s2 == NULL)
    {
        return (0);
    }
	while(s1[i] && s2[j]
		&& i < n && j < n)
	{
		if(s1[i] != s2[j])
		{
			return (0);
		}
		i++;
		j++;
	}
	return (1);
}
