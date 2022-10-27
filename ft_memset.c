/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:01:25 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 16:38:57 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*str2;

	str2 = (char *)str;
	i = 0;
	while (i < len)
	{
		str2[i] = (unsigned char)c;
		i++;
	}
	return ((void *)str);
}
/*
	1- Create new string with the value of str
	2- Iterate the new string as many times as indicated by function(len)
	3- Each iteration replaces its characters with those passed by function(c).
*/