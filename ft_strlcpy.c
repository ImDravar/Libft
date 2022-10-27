/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:46:38 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 21:35:18 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len_dst)
{
	size_t	i;

	i = 0;
	if (len_dst < 1)
		return (ft_strlen(src));
	while (src[i] && (i < len_dst - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
	1- Check if parameter lend_dst its 0 or negative
		- If its return the len of str
	2- Iterate while source exist and the counter its less to len_dst
	3- Every iteration copy the source in the destination
	4- When the iteration its over close the string
	5- Return the len of the source

	[Description ft_strlen]
		1- Iterate the string, and return the counter(i)
*/