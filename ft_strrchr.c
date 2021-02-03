/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:48:50 by wanisha           #+#    #+#             */
/*   Updated: 2020/11/28 23:48:51 by wanisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*str;

	index = 0;
	str = (char *)s;
	while (str[index] != '\0')
		index++;
	while (index >= 0)
	{
		if (str[index] == c)
			return (&str[index]);
		index--;
	}
	return (0);
}
