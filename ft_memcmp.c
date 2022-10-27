/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:08:15 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 17:48:31 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	if (!s1 && !s2)
		return (0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && (i < n - 1))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
	1- Check if the s1 and s2 exist
	2- Create new string with the value of s1 and other with s2
	3- Check if the bytes(n) for check passed by functions its 0
		- If its, return 0
	4- Iterate as long as both strings are equal,
		or as long as there are bytes left to check.
*/
