#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	mem_size;

	mem_size = nmemb * size;
	ptr = malloc(mem_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, mem_size);
	return (ptr);
}
/*
int	main(void)
{
	char	*buff;

	buff = (char *)calloc(10, sizeof(char));
	ft_strlcpy(buff, "ass scratcherino !\n", 20);
	ft_putstr(buff);
	return (0);
}
*/
