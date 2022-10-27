/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:47:38 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 20:47:25 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*func)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*result;

	if (!str)
		return (0);
	if (!func)
		return ((char *)str);
	i = 0;
	len = ft_strlen(str);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		result[i] = func(i, str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
	1- If Str doesn't exist return 0
	2- If function doesnt't exist return str
	3- Create a malloc with the len of str, and check if fails
	4- Iterate the original string, call the function and apply the result
		 to the new string
	5- Close new string and return

	[Description ft_strlen]
		1- Iterate the string, and return the counter(i)
*/