/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:04:35 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/24 13:13:55 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill(char *str, int n)
{
	if (n == -2147483648)
		ft_strlcat(str, "-2147483648", 12);
	else if (n < 0)
	{
		str[0] = '-';
		fill(str, -n);
	}
	else if (n > 9)
	{
		fill(str, n / 10);
		fill(str, n % 10);
	}
	else
		str[ft_strlen(str)] = n + '0';
}

static int	unidad(int n)
{
	int	i;

	i = 2;
	if (n == -2147483648)
		return (12);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = ft_calloc(unidad(n), sizeof(char));
	if (!str)
		return (NULL);
	fill(str, n);
	return (str);
}
