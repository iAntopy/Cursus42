#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*ptr;

	cc = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n)
		ptr[--n] = cc;
	return (s);
}
