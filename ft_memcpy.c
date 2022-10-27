/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:25:21 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 21:02:09 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str_dst;
	char	*str_src;

	if (!dst && !src)
		return (NULL);
	str_dst = (char *)dst;
	str_src = (char *)src;
	i = 0;
	while (i < len)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return ((void *) str_dst);
}
/*
	1- Check if the dst and src exist
	2- Create new string with the value of dst and other with src
	3- Iterates up to the parameter passed by the function(len)
	4- Every iteration copy the value of source inside destination
	5- Return destination
*/