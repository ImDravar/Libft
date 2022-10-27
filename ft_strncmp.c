/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:21:24 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 23:19:32 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if ((str1[i] == '\0' && str2[i] == '\0') || n == 0)
		return (0);
	while (str1[i] == str2[i] && (i < n - 1) && str1[i] && str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
	1- Check if str1 and str2 are not finished and the n its not 0
		- If its return (0)
	2- Iterate while (str1 and str2 are equal) and
		(counter its minor than n) and (str1 and str2 exist)
	3- Each iteration increases the counter(i)
	4- Returns the difference between the str1 and str2
*/