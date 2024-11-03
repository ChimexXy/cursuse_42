/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:33:33 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/02 03:20:05 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
   	char	*ptr;
    char    str;
    size_t i;

    i = 0;
    str = (char)c;
	ptr = (char *)b;
	while (len > 0)	
    {
        ptr[i] = str;
        i++;
        len--;
    }
	return (ptr); 
}