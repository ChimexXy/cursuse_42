/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splittest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:56:44 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/03 13:17:56 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_count_word(char const *str , char c)
{
    size_t i = 0;
    size_t j = 0;
    while(str[i])
    {
        while(str[i] && str[i] == c)
            i++;
        if(str[i] != c)
            j++;
        while(str[i] && str[i] != c)
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
        printf("%ld\n", words);
	array = (char **)malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (alloc_words(array, s, c,  words))
		return (NULL);
	return (array);
}

int main()
{
    char s[] = "hello,,world,,babedsd,sss";
    char c = ',';
    char **ret = ft_split(s , c);
    int i = -1;
    while(ret[++i])
        printf("%s\n", ret[i]);
    // while(i < ft_count_word(s , c))
    // {
    //     printf("%s\n", ret[1]);
    //     i++;
    //     j++;
    // }

}