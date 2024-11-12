/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:19:25 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/12 00:48:18 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

// int main()
// {
// 	printf("%s", memcpy("hello", "moad", 11));
// 	printf("%s", ft_memcpy("hello", "moad", 11));
// }

int main()
{
    char s[] = "hello,,world,,babedsd,sss";
    char c = ',';
    char **ret = ft_split(s , c);
    int i = 0;
    while(i < 4)
    {
        printf("%s\n", ret[i]);
        i++;
    }

}