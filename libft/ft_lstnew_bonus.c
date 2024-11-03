/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 06:41:38 by mozahnou          #+#    #+#             */
/*   Updated: 2024/11/02 07:02:05 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*nd;

	nd = malloc(sizeof(t_list));
	if (!nd)
		return (NULL);
	nd->content = content;
	nd->next = NULL;
	return (nd);
}