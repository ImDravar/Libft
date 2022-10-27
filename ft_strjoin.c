/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:51:34 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 23:19:28 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*temp;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(s2));
	else if (ft_strlen(s2) == 0)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	temp = (char *)malloc(sizeof(char) * len + 1);
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, s1, ft_strlen(s1)+1);
	ft_strlcat(temp, s2, len + 1);
	return (temp);
}
/*
	1- If *s1 or *s2 equal to "" return the other.
	2- Get the max size of the malloc with the sums of the two str lens.
	3- Create the malloc (with +1 for the final \0) and check if it fails.
	4- Copy the *s1 inside the *temp.
	5- Concat the *s2 inside the *temp.

	[Description ft_strlen]
		1- Iterate the string, and return the counter(i)

	[Description ft_strdup]
		1- Get the len of the source for the malloc
		2- Create and check the new string
		3- Copy in the new string the source
		4- Return the new string

	[Description ft_strlcpy]
		1- Check if parameter lend_dst its 0 or negative
			- If its return the len of str
		2- Iterate while source exist and the counter its less to len_dst
		3- Every iteration copy the source in the destination
		4- When the iteration its over close the string
		5- Return the len of the source

	[Description ft_strlcat]
		1- Get the len of the destination
		2- If the size is < len of dst
			- Return the len of source plus size
		3- Iterate while
			-(size > 0) and (destination len its smaller than size) and (source exist)
		4- Every iteration copy the source in the destination (warning counters)
		5- Close the string
		6- Iterate while the rest of source exist and plus the destination len
		7- Return destination len
*/