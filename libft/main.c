/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:19:25 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/13 06:06:58 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

// int main()
// {
// 	printf("%s", memcpy("hello", "moad", 11));
// 	printf("%s", ft_memcpy("hello", "moad", 11));
// }

// int main()
// {
//     char s[] = "hello,,world,,babedsd,sss";
//     char c = ',';
//     char **ret = ft_split(s , c);
//     int i = 0;
//     while(i < 4)
//     {
//         printf("%s\n", ret[i]);
//         i++;
//     }

// }

char index_plus(unsigned int i, char c) {
    return c + i; 
}

int main() {
    char *str = "abcdef";
    char *result;
    result = ft_strmapi(str, index_plus);
        printf("%s\n", result);
}