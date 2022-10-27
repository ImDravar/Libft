/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:37:02 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 21:01:40 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s1;
	i = 0;
	while (i < (n))
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
	1- Create new string with the value of s1
	2- Iterates up to the parameter passed by the function(n)
	3- Every iteration check if the vaule of str its equal to
		character passed by function(c)
		- If its equal return the pointer of the matching byte
	4- If no similarity was found returns null
*/