/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:06:47 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 19:37:48 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*func)(void *), void (*del)(void *))
{
	t_list	*new_list;
	void	*new_content;
	t_list	*new_node;

	new_list = NULL;
	if (lst)
	{
		while (lst)
		{
			new_content = func(lst->content);
			new_node = ft_lstnew(new_content);
			if (!new_node)
			{
				free(new_content);
				ft_lstclear(&new_list, del);
				return (0);
			}
			ft_lstadd_back(&new_list, new_node);
			lst = lst -> next;
		}
	}
	return (new_list);
}
/*
	1- If lst exist iterate list
	2- Every iteration
		- Save new content modified
		- Create new node
		- Check if the new node exist, if doesn't clean the new list.
		- Save the new node in the last position of the new list

	[Description ft_lstnew]
		1- Create node
		2- Create and check a malloc with the size of tlist
		3- Add content to the node
		4- Next value its a NULL
		5- Return node

	[Description ft_lstclear]
		1- IF lst exist, Iterate lst
		2- Save next of lst in a temp list
		3- Call lstdelone
		4- Lst its equal to temp (next)
		5- When finish iteration close lst

	[Description ft_lstadd_back]
		1- If list doesnt exist, assign new
		2- If exist, get the last item and assign the new one to the next
*/