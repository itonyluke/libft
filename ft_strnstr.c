#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t index;
	size_t needle_len;

	index = 0;
	needle_len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[index] != '\0' && index + needle_len < len + 1)
	{
		if (ft_strchr(&(haystack[index]), needle[0]))
		{
			if (!(ft_strncmp(&haystack[index], needle, needle_len)))
				return (&((char *)haystack)[index]);
		}
		index++;
	}
	return (NULL);
}
