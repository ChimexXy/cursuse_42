/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:25:40 by mozahnou          #+#    #+#             */
/*   Updated: 2024/10/23 22:27:41 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z')) 
		return (1);
	return (0);
}