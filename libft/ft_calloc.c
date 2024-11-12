/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:51:07 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/12 02:46:01 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
	unsigned char *s;

	s = malloc(count * size);
	if (!s)
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}

// #include <stdio.h>

// int main()
// {
// 	char *f;
// 	f = calloc(5, 3);
// 	printf("ss ===== %p\n", f[7]);
// 	f = ft_calloc(5, 3);
// 	printf("%p", f[7]);
// 	return 0;
// }
