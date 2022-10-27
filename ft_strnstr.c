/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:29:25 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 23:19:38 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *srch, size_t n)
{
	size_t	i;
	size_t	j;
	char	*t_str;
	char	*t_srch;

	i = 0;
	j = 0;
	t_str = (char *)str;
	t_srch = (char *)srch;
	if (t_srch[j] == '\0')
		return (t_str);
	while (t_str[i] && i < n)
	{
		j = 0;
		if (t_str[i] == t_srch[j])
		{
			while (t_srch[j] && (i + j < n) && (t_str[i + j] == t_srch[j]))
				j++;
			if (t_srch[j] == '\0')
				return (&t_str[i]);
		}
		i++;
	}
	return (0);
}
/*
	1- Create new strings with the value of str and srch
	2- Check if srch its finished
		- If its Return str
	3- Iterate while (str exist) and the (counter is less than n)
	4- Each iteration
		- Reset the secondary counter(j)
		- Check if str and srch are equal
			-# If its equal
				-## Iterate while are equal and increase the secondary counter(j)
				-## Check if search are finished
					-### If its finished Return the rest of the str
	5- Return 0
*/