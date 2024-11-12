/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:45:19 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/09 00:40:33 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int i;
    char *p;

    i = ft_strlen(s);
    p = (char *)s;
	while(i >= 0)
	{
		if(s[i] == c)
			return (p + i);
		i--;
	}
	return (NULL);
}

// int main(void) {
//     printf("%s\n", strrchr("", 't'));
//     printf("%s\n", ft_strrchr("", 't'));
// }