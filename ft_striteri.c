/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:24:34 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 20:34:14 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*func)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			func(i, &str[i]);
			i++;
		}
	}
}
/*
	1- If Str exist Iterate the string, call the function in the pointer
*/