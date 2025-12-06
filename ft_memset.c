/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:25:58 by matlabar          #+#    #+#             */
/*   Updated: 2025/12/03 08:35:59 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *) s;
	i = 0;
	while (n > 0)
	{
		ptr[i] = c;
		i++;
		n--;
	}
	return (s);
}

/* int main(void)
{
	char c = 'z';
	char str[] = "camaleonte";
	ft_memset(str+2, c, 4);
	printf("%s", str);
} */