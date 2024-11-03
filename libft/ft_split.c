/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:43:59 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/01 06:15:23 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_count(char const *str , char c)
{
    size_t i = 0;
    size_t j = 0;
    while (str[i] == c)
        i++;
    if(str[0] != c)
            j++;
    while (str[i])
    {
        if(str[i] != c)
        {
            if(str[i - 1] == c)
            {
                j++;
            }
        }
        i++;
    }
    return (j);
} 
char **ft_split(char const *s, char c)
{
    size_t i;
    size_t j;
    char **ret;

    i = 0;
    j = ft_count(s, c);
    ret = malloc((j + 1) * sizeof(char *));
    if(s == NULL)
        return(NULL);
    while (s[i])
    {
        
    }
}
int main()
{
    size_t i = 0;
    size_t j = 0;
    char s[] = "hello world babe";
    char c = ' ';
    char **ret = ft_split(s , c);
    while(i < ft_count(s , c))
    {
        printf("%s\n", ret[j]);
        i++;
        j++;
    }

}