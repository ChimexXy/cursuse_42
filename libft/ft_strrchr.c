/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:45:19 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/03 12:14:19 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	int i;

    i = 0;
    while(s[i])
    {
        i++;
    }
	while(i > 0)
	{
		if(s[i] == c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return ((char *)s);
}

int main()
{
    printf("%s", ft_strrchr("tnetwotrkt", 116));
}