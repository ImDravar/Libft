/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:02:40 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 20:24:13 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	if (fd)
	{
		ft_putstr_fd(str, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
	1- If fd exist call putstr and later call putchar with a '\n'

	[Description ft_putstr_fd]
		1- If fd exist iterate the string and call putchar with every character
		
	[Description ft_putchar_fd]
		1- If fd exist write a character inside
*/