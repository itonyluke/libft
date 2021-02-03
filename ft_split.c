/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:46:40 by wanisha           #+#    #+#             */
/*   Updated: 2020/11/28 23:46:42 by wanisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_cleanup(char **arr, int length_of_str)
{
	int	index;

	index = 0;
	while (index < length_of_str - 1)
	{
		free(arr[index]);
		index++;
	}
	free(arr);
	return (NULL);
}

static size_t	ft_count_w(char const *s, char c)
{
	size_t	index;
	size_t	number_of_words;

	index = 0;
	number_of_words = 0;
	if (c != '\0')
	{
		while (s[index] == c)
			index++;
	}
	while (s[index] != '\0')
	{
		while (s[index] != c && s[index] != '\0')
			index++;
		if (s[index] == c || s[index] == '\0')
		{
			number_of_words++;
			while (s[index] == c && s[index] != '\0')
				index++;
		}
	}
	return (number_of_words);
}

static char		*ft_wordup(const char *s1, size_t start, size_t end)
{
	char	*s2;
	size_t	index;

	if (!(s2 = (char *)malloc(end - start + 1)))
		return (NULL);
	index = 0;
	while (start < end)
		s2[index++] = s1[start++];
	s2[index] = '\0';
	return (s2);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	index;
	size_t	index2;
	size_t	index3;

	if (!s || !(arr = (char **)malloc((ft_count_w(s, c) + 1) * sizeof(char *))))
		return (NULL);
	index = 0;
	index2 = 0;
	index3 = 0;
	while (index2 < ft_count_w(s, c))
	{
		while (s[index++] == c)
			index3++;
		while (s[index] != c && s[index] != '\0')
			index++;
		if (s[index] == c || s[index] == '\0')
		{
			if (!(arr[index2++] = ft_wordup(s, index3, index)))
				return (ft_cleanup(arr, index2));
		}
		index3 = index;
	}
	arr[index2] = 0;
	return (arr);
}
