/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:05:41 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 20:19:48 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*temp;

	temp = (void *)malloc(count * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}

/*
	1- Create and check a new string, with the parameters passed by function
	2- Call bzero and send ith the new str(temp) and his size (count * size)
	4- Return the new string

	[Description ft_bzero]
		1-  Call the memset function and set a 0 as character

	[Description ft_memset]
		1- Create new string with the value of str
		2- Iterate the new string as many times as indicated by function(count * size)
		3- Each iteration replaces its characters with those passed by function(0).
	*/