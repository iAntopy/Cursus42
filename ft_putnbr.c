#include "libft.h"

static void	rec_putnbr(long long int n)
{
	if (n > 10)
		rec_putnbr(n / 10);
	ft_putchar('0' + (n % 10));
}

void	ft_putnbr(int nbr)
{
	long long int	n;

	n = (long long int)nbr;
	write(1, "-", (n < 0));
	n *= 1 - (2 * (n < 0));
	rec_putnbr(n);
}
/*
int	main(int argc, char *argv[])
{
	int	nbr;

	if (argc > 1)
	{
		nbr = atoi(argv[1]);
		ft_putnbr(nbr);
	}
	return (0);
}
*/
