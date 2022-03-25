#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	char	*d;
	size_t	str_len;

	str_len = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!dup)
		return (NULL);
	d = dup;
	while (*str)
		*(d++) = *(str++);
	dup[str_len] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	*dup;
	char	src[] = "Kawaboonga !";

	dup = ft_strdup(src);
	ft_putstr(dup);
	return (0);
}
*/
