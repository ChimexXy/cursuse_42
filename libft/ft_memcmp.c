/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:30:45 by mozahnou          #+#    #+#             */
/*   Updated: 2024/10/27 17:37:17 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char    *str1;
    unsigned char    *str2;

	i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (n > 0)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
		i++;
		n--;
    }
    return (0);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "dauad";
    char str2[] = "mouzd";
    printf("%d\n", ft_memcmp(str1, str2, 2));
    printf("%d\n", memcmp(str1, str2, 2));
}
