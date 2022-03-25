#include "libft.h"

int	ft_tolower(int c)
{
	return (c + (32 * ft_isupper(c)));
}
