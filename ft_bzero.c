/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:47:22 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 20:19:33 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
/*
	1-  Call the memset function and set a 0 as character

	[Description ft_memset]
		1- Create new string with the value of str
		2- Iterate the new string as many times as indicated by function(n)
		3- Each iteration replaces its characters with those passed by function(0).
*/