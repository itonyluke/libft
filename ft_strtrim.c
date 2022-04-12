#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	index;
	size_t	length_of_s1;

	if (!s1 || !set)
		return (0);
	index = 0;
	length_of_s1 = ft_strlen(s1);
	while (s1[index] != '\0' && ft_strchr(set, s1[index]))
		index++;
	while (length_of_s1 > index && ft_strchr(set, s1[length_of_s1 - 1]))
		length_of_s1--;
	s2 = ft_substr(s1, index, length_of_s1 - index);
	return (s2);
}
