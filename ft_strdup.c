#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		s1_len;
	int		index;

	s1_len = ft_strlen(s1);
	if (!(s2 = (char *)malloc(s1_len + 1)))
		return (NULL);
	index = 0;
	while (s1[index] != '\0')
	{
		s2[index] = s1[index];
		index++;
	}
	s2[index] = '\0';
	return (s2);
}
