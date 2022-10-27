/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:30:26 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 20:38:25 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		result;
	int		i;
	char	*temp;
	int		neg;

	i = 0;
	neg = 1;
	result = 0;
	temp = (char *)str;
	while (str[i] == ' ' || (temp[i] >= 9 && temp[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(temp[i]) == 1)
	{
		result = (result * 10) + (temp[i] - '0');
		i++;
	}
	return (result * neg);
}
/*
	1- The first Iteration,	"erase" the blanks and special comands
		from the cont(i) of the string(str)
	2- Detect negative or positive(neg)
	3- Iterate the rest of the string while the cont its equal to a number,
		and saving it in a new variable * ten
	4- Return the new value with the correct symbol (-+)
*/