/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlabar <matlabar@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:34:12 by matlabar          #+#    #+#             */
/*   Updated: 2025/11/29 14:34:12 by matlabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		len;
	int		sign;

	sign = (n < 0);
	nb = n;
	len = ft_nlen(nb);
	res = (char *)malloc(len + sign + 1);
	if (!res)
		return (NULL);
	res[len + sign] = '\0';
	if (sign)
		nb = -nb;
	while (len > 0)
	{
		res[sign + len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	if (sign)
		res[0] = '-';
	return (res);
}

/* int main(void)
{
	printf("%s\n", ft_itoa(12345));
} */