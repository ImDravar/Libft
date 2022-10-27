/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:35:17 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 19:40:00 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (*lst)
	{
		while (*lst)
		{
			temp = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
		*lst = NULL;
	}
}
/*
	1- IF lst exist, Iterate lst
	2- Save next of lst in a temp list
	3- Call lstdelone
	4- Lst its equal to temp (next)
	5- When finish iteration close lst

	[Description ft_lstdelone]
		1- If lst exist call del and sent the content of lst
		2- Free the memory of lst
*/