/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:59:07 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/09/30 18:35:51 by rruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_free(char **parts)
{
	int	i;

	i = 0;
	while (parts[i])
	{
		free(parts[i]);
		i++;
	}
	free(parts);
}

int	ft_countparts(const char *str, char c)
{
	int	num_parts;
	int	i;

	i = 0;
	num_parts = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			num_parts++;
		i++;
	}
	return (num_parts);
}

char	**ft_subsplit(const char *str, char c, char **parts)
{
	int		i;
	int		start;
	int		cont;

	i = 0;
	cont = 0;
	start = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			parts[cont] = ft_substr(str, start, i - start + 1);
			if (!parts[cont])
			{
				ft_free(parts);
				return (0);
			}
			cont++;
		}
		if (str[i] == c && (str[i + 1] != c || str[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	parts[cont] = NULL;
	return (parts);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	char	**parts;

	i = 0;
	if (!str)
		return (0);
	parts = malloc(sizeof(char *) * (ft_countparts(str, c) + 1));
	if (!parts)
		return (NULL);
	parts = ft_subsplit(str, c, parts);
	return (parts);
}
/*
	1- Create a function that return total of parts/words
	2- With the total parts, create and check a matrix of this size with malloc
	3- Iterate the string
		-[Detect word] If the str[i] its different to separator(c) and
			the next character its equal a separator or '\0',
			new word its equal to substr of (the str, with start pos of the word,
				and final pos of the word)
		-[Detect separator] If the str[i] its equal to separator(c) and
			the next character	its different to the separator or '\0',
			star of the word its cont[i] +1
	4- Close string and return

	[Description substr]
		1- IF string len is equal to 0 returns the pointer calling strdup
		2- If start is > to the len of str the max_len its 0
		3- If max_len > len of str minus star then max_len its equal to
			the len o str minus start
		4- Create and check the malloc of the new str with the max_len
		5- If max_len its equal to 0 return the string with a char 0 inside
		6- Copy in the new string the old string from the position start to the max_len
*/
/*
int main()
{
	char 	**str;
	int 	count = 0;

	str = ft_split("olol", ' ');
	while (str[count])
	{
		printf("MY ARRAY IN POS %d IS %s", count, str[count]);
		count++;
	}
	return (0);
}*/