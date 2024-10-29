/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:46:42 by mozahnou          #+#    #+#             */
/*   Updated: 2024/10/27 17:53:00 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *s1;
    unsigned char   s2;

    s1 = (unsigned char *)s;
    s2 = (unsigned char)c;
    while (n > 0)
    {
        if (*s1 == s2)
            return (s1);
        s1++;
        n--;
    }
    return (NULL);
}
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%s\n", ft_memchr("Hello, World!", 'o', 16));
    printf("%s\n", memchr("Hello, World!", 'o', 16));
}