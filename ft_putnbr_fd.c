/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:09:15 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/10/13 20:25:23 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = (long)n;
	if (fd)
	{
		if (number < 0)
		{
			ft_putchar_fd('-', fd);
			number = number * (-1);
		}
		if (number < 10)
			ft_putchar_fd(number + '0', fd);
		else
		{
			ft_putnbr_fd(number / 10, fd);
			ft_putchar_fd((number % 10) + '0', fd);
		}
	}
}
/*
	1- If fd exist check if number is negative, call putchar
		for the simbols and make the number positive
	2- If number is a unit (<10) call putchar directly with
		 the number plus '0' for char conversion
	3- If the number is >10 call the function with recursivity
		with the number divided by 10  and
		put the mod in the fd wit putchar plus '0'

		[Description ft_putchar_fd]
			1- If fd exist write a character inside
*/
