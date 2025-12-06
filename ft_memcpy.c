/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:12:49 by matlabar          #+#    #+#             */
/*   Updated: 2025/12/03 08:35:48 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char src[100] = "melapera";
	char src2[100] = "melapera";
	
	ft_memcpy(src+5, src, 40);
	printf("ft_memcpy %s\n", src);

	memcpy(src2+5, src2, 40);
	printf("memcpy    %s\n", src);
} */