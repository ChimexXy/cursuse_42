/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:56:44 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/13 22:37:54 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_arr(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (NULL);
}

static size_t	ft_count_word(char const *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] != c && str[i])
			j++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (j);
}

static char	**ft_alloc_words(char **string, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	j;
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
		string[k] = ft_substr(s, i - j, j);
		if (!string[k])
			return (ft_free_arr(string, k));
		k++;
	}
	string[k] = NULL;
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_word(s, c);
	array = (char **)malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_alloc_words(array, s, c, words);
	if (!array)
		return (NULL);
	return (array);
}
