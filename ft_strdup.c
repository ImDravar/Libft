/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:40:59 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/14 00:51:38 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}
/*
	1- Get the len of the source for the malloc
	2- Create and check the new string
	3- Copy in the new string the source
	4- Return the new string

	[Description ft_strlen]
		1- Iterate the string, and return the counter(i)

	[Description ft_strlcpy]
		1- Check if parameter lend_dst its 0 or negative
			- If its return the len of str
		2- Iterate while source exist and the counter its less to len_dst
		3- Every iteration copy the source in the destination
		4- When the iteration its over close the string
		5- Return the len of the source
 */