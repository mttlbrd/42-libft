/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:33:23 by matlabar          #+#    #+#             */
/*   Updated: 2025/11/29 14:33:23 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *set, int c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	sta;
	size_t	end;

	sta = 0;
	end = ft_strlen(s1) - 1;
	while (s1[sta] && check(set, s1[sta]))
		sta++;
	while (s1[sta] && check(set, s1[end]))
		--end;
	return (ft_substr(s1, sta, (end - sta) + 1));
}
