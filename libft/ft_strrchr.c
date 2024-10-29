/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:45:19 by mozahnou          #+#    #+#             */
/*   Updated: 2024/10/26 16:17:00 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
