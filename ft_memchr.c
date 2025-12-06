/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:43:43 by matlabar          #+#    #+#             */
/*   Updated: 2025/12/03 08:35:23 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		if ((unsigned char)c == *ptr)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

/* int main(void)
{
	char str[] = "Lorem ipsum";
	printf("%s\n", (char *) ft_memchr(str, 'r', 12));
} */