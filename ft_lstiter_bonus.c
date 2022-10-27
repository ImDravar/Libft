/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:44:52 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/14 00:51:07 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*func)(void *))
{
	if (lst)
	{
		while (lst)
		{
			func(lst -> content);
			lst = lst->next;
		}
	}
}
/*
	1- If lst exist iterate list
	2- Every iteration call the function and sent the content
*/