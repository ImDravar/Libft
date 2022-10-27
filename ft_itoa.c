/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:29:50 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/06 20:24:42 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenitoa(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len = 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_nummax(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		mod;

	mod = 0;
	len = ft_lenitoa(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
		result[0] = '-';
	while (n)
	{
		len--;
		mod = ft_nummax(n % 10);
		result[len] = mod + '0';
		n = n / 10;
	}
	return (result);
}
/*
	1- Get len of the number
	2- Create and check the malloc wiht the size of the len
	3- Close string
	4- If number is equal to 0 put directly in the string
	5- If the number i negative put in pos[0] the '-'
	6- While n exist, substract 1 to len, get the mod in max mode(without negative),
		 put the mod in the string and add '0' for char conversion,
		 divide the number by 10 and save in the same number.
*/