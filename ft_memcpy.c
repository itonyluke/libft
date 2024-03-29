#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t index;

	if (!dst && !src)
		return (0);
	index = 0;
	while (index < n)
	{
		((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		index++;
	}
	return (dst);
}
