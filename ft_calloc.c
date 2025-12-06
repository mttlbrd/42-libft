/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:26:09 by matlabar          #+#    #+#             */
/*   Updated: 2025/12/03 09:48:43 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			totsize;

	totsize = nmemb * size;
	if (size > 0 && totsize / size != nmemb)
		return (NULL);
	ptr = malloc(totsize);
	i = 0;
	if (!ptr)
		return (NULL);
	while (i < totsize)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
