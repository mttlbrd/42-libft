/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:28:53 by matlabar          #+#    #+#             */
/*   Updated: 2025/11/29 14:28:53 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;
	size_t	sublen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_calloc(1, 1));
	if (slen - start < len)
		sublen = slen - start;
	else
		sublen = len;
	ptr = (char *)malloc(sublen + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s[start], sublen + 1);
	return (ptr);
}

/* int main()
{
	printf("%s", ft_substr("mamma", 1, 5));
} */
// Allocates memory (using malloc(3)) and returns a
// substring from the string ’s’.
// The substring starts at index ’start’ and has a
// maximum length of ’len’.