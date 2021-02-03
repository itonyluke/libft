/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:37:37 by wanisha           #+#    #+#             */
/*   Updated: 2020/11/28 23:38:17 by wanisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_num(int n)
{
	int	index;
	int	res;

	index = 0;
	res = n;
	if (n <= 0)
		index = 1;
	while (res != 0)
	{
		res = res / 10;
		index++;
	}
	return (index);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		index;

	index = ft_count_num(n);
	if (!(str = (char *)malloc((index * sizeof(char) + 1))))
		return (NULL);
	str[index] = '\0';
	if (n == -2147483648)
	{
		n = -214748364;
		str[index-- - 1] = '8';
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (index > 0 && str[index - 1] != '-')
	{
		str[index-- - 1] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
