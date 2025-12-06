/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:32:47 by matlabar          #+#    #+#             */
/*   Updated: 2025/11/29 18:06:31 by matlabar         ###   ########.fr       */
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

/* int main(void)
{
	char s[] = "asdfghjkhl";
	int c = 'h';
	printf("%s", ft_strrchr(s, c));
} */
// OK LOGIC + NORM