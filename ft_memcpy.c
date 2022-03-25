#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dc;
	unsigned char	*sc;

	dc = (unsigned char *)dest;
	sc = (unsigned char *)src;
	while (n--)
		*(dc++) = *(sc++);
	return (dest);
}
