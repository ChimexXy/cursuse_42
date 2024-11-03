/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:09:09 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/02 03:00:46 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count(int num)
{
    int i;

    i = 0;
    if(num <= 0)
        i++;
    while(num)
    {
        num = num / 10;
        i++;
    }
    return(i);
}
char *ft_itoa(int n)
{
    int i;
	char			*str;
	int				len;
	unsigned int	nbr;

    i = 0;
	len = ft_count(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str[i])
		return (NULL);
	str[len] = '\0';
	nbr = n;
	if (n < 0)
		nbr = -n;
	while (len)
	{
		str[len - 1] = 48 + nbr % 10;
		nbr = nbr / 10;
        len--;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}

int main()
{
    printf("%s", ft_itoa(-3156));
}