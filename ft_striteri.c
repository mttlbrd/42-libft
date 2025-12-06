/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:34:51 by matlabar          #+#    #+#             */
/*   Updated: 2025/11/29 14:34:51 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/* void aaa(unsigned int i, char *c)
{
    *c = i + 65;
}

int main()
{
	char str[] = "babbo natale";
	printf("%s\n", str);
	ft_striteri(str, &aaa);
	printf("%s\n", str);
} */