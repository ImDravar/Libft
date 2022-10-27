/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:40:42 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 21:15:39 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
/*
	1- Get the len of the str
	2- Iterate while the len >= 0
	3- Each iteration
		-Check if str are equal to the character passed by the function(c)
			-# If its return the rest of te str
	4- Outside the iteration return (0)
	
	[Description ft_strlen]
		1- Iterate the string, and return the counter(i)
*/