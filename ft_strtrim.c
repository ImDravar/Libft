/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:47:58 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 23:19:49 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *del)
{
	int	i;
	int	len;

	i = 0;
	if (!str || !del)
		return (NULL);
	while (str[i] && ft_strchr(del, str[i]))
		i++;
	len = ft_strlen(str);
	while (ft_strrchr(del, str[len]) && len)
		len--;
	return (ft_substr(&str[i], 0, (len - i) + 1));
}
/*
	1- NULL If *str or *del doesn't exist.
	2- Strchr to get the count ++'i' of (*str - *del), from the left to
		the right of *str.
	3- With the len of *str call the Strrchar for count --'len' of (*str - *del),
		from right to left of *str.
	4- When we have the two counters start(0 of &st[i] or str and i) and the end
		(len - i -1)we send it to substr to extract the "center" withou the *del.

		[Description ft_strlen]
			1- Iterate the string, and return the counter(i)

		[Description ft_strrchr]
			1- Get the len of the str
			2- Iterate while the len >= 0
			3- Each iteration
				-Check if str are equal to the character passed by the function(c)
					-# If its return the rest of te str
			4- Outside the iteration return (0)

		[Description ft_substr]
			1- IF string len is equal to 0 returns the pointer calling strdup
			2- If start is > to the len of str the max_len its 0
			3- If max_len > len of str minus star then max_len its equal to
				the len o str minus start
			4- Create and check the malloc of the new str with the max_len
			5- If max_len its equal to 0 return the string with a char 0 inside
			6- Copy in the new string the old string
				from the position start to the max_len

			[Description ft_strdup]
				1- Get the len of the source for the malloc
				2- Create and check the new string
				3- Copy in the new string the source
				4- Return the new string

			[Description ft_memset]
				1- Create new string with the value of str
				2- Iterate the new string as many times as indicated by function(len)
				3- Each iteration replaces its characters with
					those passed by function(c).

			[Description ft_strlcpy]
				1- Check if parameter lend_dst its 0 or negative
					- If its return the len of str
				2- Iterate while source exist and the counter its less to len_dst
				3- Every iteration copy the source in the destination
				4- When the iteration its over close the string
				5- Return the len of the source
*/