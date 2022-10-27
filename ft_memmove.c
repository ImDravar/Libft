/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:42:35 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 20:08:42 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str_dst;
	char	*str_src;

	str_dst = (char *)dst;
	str_src = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (str_dst < str_src)
		ft_memcpy(dst, src, len);
	else if (str_dst == str_src)
		return ((void *)dst);
	else
	{
		while (len > 0)
		{
			str_dst[len - 1] = str_src[len - 1];
			len--;
		}
	}
	return ((void *)str_dst);
}
/*
	1- Check if the dst and src exist
	2- Create new string with the value of dst and other with src
	3- If dst < src, copy in dest the len of str with memcpy.
	4- If dst and src are equal return dst
	5- If not(dst < src) and not (dst = src) then
		-Iterate from right to left of str copying src to dst
	6- Return dst

	[Description ft_memcpy]
		1- Check if the dst and src exist
		2- Create new string with the value of dst and other with src
		3- Iterates until to the parameter passed by the function(len)
		4- Every iteration copy the value of source inside destination
		5- Return destination
*/
