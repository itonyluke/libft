#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	dst_len;
	size_t	initial_dst_len;

	dst_len = ft_strlen(dst);
	initial_dst_len = dst_len;
	index = 0;
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	if (dstsize && initial_dst_len < dstsize)
	{
		while (src[index] != '\0' && index < dstsize - initial_dst_len - 1)
		{
			dst[dst_len] = src[index];
			index++;
			dst_len++;
		}
		dst[dst_len] = '\0';
	}
	return (initial_dst_len + ft_strlen(src));
}
