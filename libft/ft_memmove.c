/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:38:09 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/02 03:17:24 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dhld;
	char	*shld;
	size_t	i;

	i = 0;
	dhld = (char *)dst;
	shld = (char *)src;
	if (dst == src)
		return (dst);
	if (dhld > shld)
		while (len > 0)
        {
            dhld[len] = shld[len];
            len--;
        }		
	else
	{
		while (i < len)
		{
			dhld[i] = shld[i];
			i++;
		}
	}
	return (dst);
}
