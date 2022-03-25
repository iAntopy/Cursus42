#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	i = 0;
	while (nptr[i] && ft_isspace(nptr[i]))
		i++;
	if (nptr[i] && ft_issign(nptr[i]))
	{
		if (!ft_isdigit(nptr[i + 1]))
			return (0);
		sign = 1 - (2 * (nptr[i++] == '-'));
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
		nb = (nb * 10) + (nptr[i++] - '0');	
	return (sign * nb);
}
