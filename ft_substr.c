#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	index;

	index = 0;
	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		if (!(sub_str = (char *)malloc(len + 1)))
			return (NULL);
		while (s[start] != '\0' && index < len)
		{
			sub_str[index] = s[start];
			index++;
			start++;
		}
		sub_str[index] = '\0';
		return (sub_str);
	}
	if (!(sub_str = (char *)malloc(1)))
		return (NULL);
	sub_str[0] = '\0';
	return (sub_str);
}
