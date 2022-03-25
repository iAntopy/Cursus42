#include "libft.h"

static void	ft_bwrd_cpy(unsigned char *dest, unsigned char *src, size_t n)
{
	while(n--)
		dest[n] = src[n];
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((src < dest) && (dest < (src + n)))
		ft_bwrd_cpy((unsigned char *)dest, (unsigned char *)src, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
