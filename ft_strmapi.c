#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	index;

	if (!f || !s || !(s2 = ft_strdup(s)))
		return (0);
	index = 0;
	while (s2[index] != '\0')
	{
		s2[index] = f(index, s2[index]);
		index++;
	}
	s2[index] = '\0';
	return (s2);
}
