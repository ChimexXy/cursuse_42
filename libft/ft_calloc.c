/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:51:07 by mozahnou          #+#    #+#             */
/*   Updated: 2024/10/28 16:59:33 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void    *ft_calloc(size_t count, size_t size)
{
	unsigned char *s;
	size_t i;

	s = malloc(count * size);
	i = 0;
	while (i < (count * size))
	{
		s[i] = 0;
		i++;
	}
	return (s);
}

#include <stdio.h>

int main()
{
	char *f;
	f = calloc(5, 3);
	printf("ss ===== %p\n", f[7]);
	f = ft_calloc(5, 3);
	printf("%p", f[7]);
	return 0;
}
