#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	ch;

	s = (unsigned char *)str;
	ch = (unsigned char)c;
	while (n--)
		if (*(s++) == ch)
			return (s - 1);
	return (NULL);
}
