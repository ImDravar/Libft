/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:44:17 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 21:36:45 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t max_len)
{
	size_t	len_str;
	char	*temp;

	if (ft_strlen(s) == 0)
		return (ft_strdup(s));
	len_str = ft_strlen(s);
	if (start > len_str - 1)
		max_len = 0;
	else if (max_len > len_str - start)
		max_len = len_str - start;
	temp = (char *)malloc(sizeof(char) *(max_len + 1));
	if (!temp)
		return (NULL);
	if (max_len == 0)
		return (ft_memset(temp, 0, 1));
	ft_strlcpy(temp, &s[start], max_len + 1);
	return (temp);
}
/*
	1- IF string len is equal to 0 returns the pointer calling strdup
	2- If start is > to the len of str the max_len its 0
	3- If max_len > len of str minus star then max_len its equal to
		the len o str minus start
	4- Create and check the malloc of the new str with the max_len
	5- If max_len its equal to 0 return the string with a char 0 inside
	6- Copy in the new string the old string from the position start to the max_len

	[Description ft_strdup]
		1- Get the len of the source for the malloc
		2- Create and check the new string
		3- Copy in the new string the source
		4- Return the new string
		
	[Description ft_memset]
		1- Create new string with the value of str
		2- Iterate the new string as many times as indicated by function(len)
		3- Each iteration replaces its characters with those passed by function(c).

	[Description ft_strlcpy]
		1- Check if parameter lend_dst its 0 or negative
			- If its return the len of str
		2- Iterate while source exist and the counter its less to len_dst
		3- Every iteration copy the source in the destination
		4- When the iteration its over close the string
		5- Return the len of the source

		[Description ft_strlen]
			1- Iterate the string, and return the counter(i)
*/