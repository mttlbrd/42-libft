/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:02:45 by matlabar          #+#    #+#             */
/*   Updated: 2025/12/03 08:36:46 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == (char) c)
			return ((char *) s);
		if (*s == '\0')
			break ;
		s++;
	}
	return (NULL);
}

/* int main(void)
{
	char s[] = "asdfghjkl";
	int c = 'n';
	printf("%s\n", ft_strchr(s, c));
} */