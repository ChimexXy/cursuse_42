/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 03:28:02 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/04 13:54:30 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

    
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *ptr;

    if (!s || !f)
        return(NULL);
    i = 0;
    ptr = (char *)(ft_strlen(s) + 1);
    while(s[i])
    {
        ptr[i] = (*f)(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
}
