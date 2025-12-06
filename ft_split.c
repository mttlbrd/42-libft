/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:33:48 by matlabar          #+#    #+#             */
/*   Updated: 2025/11/29 14:33:48 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(const char *str, char c)
{
	int	x;
	int	flag;

	x = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			x++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (x);
}

static char	**free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**newstr(char const *s, int c, int words, char **str)
{
	int	x;
	int	y;
	int	start;

	x = 0;
	y = 0;
	while (x < words)
	{
		while (s[y] == c)
			y++;
		start = y;
		while (s[y] && s[y] != c)
			y++;
		str[x] = ft_substr(s, start, y - start);
		if (!str[x])
			return (free_str(str));
		x++;
	}
	str[words] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		words;

	if (!s)
		return (NULL);
	words = counter(s, c);
	str = (char **)malloc((words + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (newstr(s, c, words, str));
}
