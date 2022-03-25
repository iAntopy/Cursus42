#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	return (ft_strndup(s + start, len));
}
/*
int	main(void)
{
	char	buff[] = "ca c'est vraiment incroyable.";
	char	*sub;
	
	sub = ft_substr(buff, 9, 8);
	ft_putstr("Init buff : ");
	ft_putstr(buff);
	ft_putstr("\n");
	ft_putstr("substr : ");
	ft_putstr(sub);
	return (0);
}*/
