/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splittest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:56:44 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/02 15:03:03 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_count_word(char const *str , char c)
{
    size_t i = 0;
    size_t j = 0;
    while (str[i] == c)
        i++;
    if(str [0] != c)
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

static size_t	alloc_words(char **array, char const *s, char c,  int words)
{
    size_t	i;
    size_t  j;
	size_t	k;

	k = 0;
	i = 0;
	while (k < words)
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		array[k] = ft_substr(s, i - j, j);
		if (array[k] == NULL)
		{
			return (1);
		}
		k++;
	}
	array[k] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;
    size_t i;

	if (!s)
		return (NULL);
    i = 0;
	words = ft_count_word(s, c);
	array = (char **)malloc((words + 1) * sizeof(char *));
	if (array[i])
		return (NULL);
	if (alloc_words(array, s, c,  words))
		return (NULL);
	return (array);
}

// char **ft_split(char const *s, char c)
// {
//     size_t i;
//     size_t ind;
//     char **ret;

//     i = 0;
//     ind = ft_count_word(s, c);

//     ret = malloc((word + 1) * sizeof(char *));
//     while(s[i])
//     {
//         if(alloc_word(s, c, ret, ind))
//         {
//             ret[ind] = ft_find_str(s, start, i - 1);
//             while(s[i] == c)
//             {
//                 i++;
//             }
//             ind++;
//         }
//         i++;
//     }
//     return (ret);
// }

int main()
{
    size_t i = 0;
    size_t j = 0;
    char s[] = "hello,,world,,babe";
    char c = ',';
    char **ret = ft_split(s , c);
    printf("%s\n", ret[3]);
    // while(i < ft_count_word(s , c))
    // {
    //     printf("%s\n", ret[1]);
    //     i++;
    //     j++;
    // }

}