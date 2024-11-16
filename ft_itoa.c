/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:09:09 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/15 10:59:16 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int num)
{
	int	i;

	i = 0;
	if (num <= 0)
	{
		i++;
		num = -num;
	}
	while (num)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	nbr;

	len = ft_count(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	nbr = n;
	if (n < 0)
		nbr = -n;
	while (len)
	{
		len--;
		str[len] = 48 + nbr % 10;
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
