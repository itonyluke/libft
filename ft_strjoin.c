#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_index;
	size_t	s2_index;
	char	*new_str;

	if (!s1 || !s2)
		return (0);
	s1_index = ft_strlen(s1);
	s2_index = ft_strlen(s2);
	if (!(new_str = (char *)malloc(s1_index + s2_index + 1)))
		return (NULL);
	s1_index = 0;
	while (s1[s1_index] != '\0')
	{
		new_str[s1_index] = s1[s1_index];
		s1_index++;
	}
	s2_index = 0;
	while (s2[s2_index] != '\0')
	{
		new_str[s1_index] = s2[s2_index];
		s1_index++;
		s2_index++;
	}
	new_str[s1_index] = '\0';
	return (new_str);
}
