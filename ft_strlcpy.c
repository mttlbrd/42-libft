/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:03:51 by matlabar          #+#    #+#             */
/*   Updated: 2025/11/28 17:44:18 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

int	main(void)
{
	char	src[30] = "Patate e prezzemolo";
	char	dst[10] = "123456789";
	size_t	size = 10;
	size_t	tot;

	tot = ft_strlcpy(dst, src, size);
	printf("dst: \"%s\"\n", dst);
	printf("Lunghezza totale attesa: %zu\n", tot);
	
	return (0);
}
