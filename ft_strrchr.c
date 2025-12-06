/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:32:47 by matlabar          #+#    #+#             */
/*   Updated: 2025/12/03 10:31:10 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = NULL;
	while (1)
	{
		if (*s == (char) c)
			tmp = (char *) s;
		if (*s == '\0')
			break ;
		s++;
	}
	return (tmp);
}
