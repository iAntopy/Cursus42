#include "libft.h"

static int	ft_log10(int n)
{
	int	o;

	o = 0;
	while (n)
	{
		n /= 10;
		o++;
	}
	return (o);
}

static void	ft_writenbr(char *nstr, long long int nb)
{
	while (nb)
	{
		*(--nstr) = '0' + (nb % 10);
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	long long int	nb;
	char		*nstr;
	int		is_neg;

	nb = n;
	is_neg = (n < 0);
	size = ft_log10(n) + is_neg;
	nstr = (char *)malloc(sizeof(char) * (size + 1));
	if (is_neg)
	{
		*nstr = '-';
		nb *= -1;
	}
	ft_writenbr(nstr + size, nb);
	nstr[size] = '\0';
	return (nstr);
}
/*
int	main(int argc, char *argv[])
{
	int	nb;
	char	*nstr;
	
	if (argc > 1)
	{
		nb = ft_atoi(argv[1]);
		nstr = ft_itoa(nb);
		if (!nstr)
			ft_putstr("NO NSTR !");
		ft_putstr(nstr);
	}
	return (0);
}
*/
