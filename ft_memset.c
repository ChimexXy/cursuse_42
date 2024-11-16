/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:33:33 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/16 11:12:51 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	p;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)b;
	p = (unsigned char)c;
	while (i < len)
	{
		ptr[i] = p;
		i++;
	}
	return (ptr);
}
