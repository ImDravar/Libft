/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:02:44 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 20:45:59 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = 0;
	if (size < dst_len)
		return (ft_strlen(src) + size);
	while (size > 0 && dst_len < size - 1 && src[i])
	{
		dst[dst_len++] = src[i++];
	}
	dst[dst_len] = '\0';
	while (src[i++])
		dst_len++;
	return (dst_len);
}
/*
	1- Get the len of the destination
	2- If the size is < len of dst
		- Return the len of source plus size
	3- Iterate while
		-(size > 0) and (destination len its smaller than size) and (source exist)
	4- Every iteration copy the source in the destination (warning counters)
	5- Close the string
	6- Iterate while the rest of source exist and plus the destination len
	7- Return destination len

	[Description ft_strlen]
		1- Iterate the string, and return the counter(i)
*/