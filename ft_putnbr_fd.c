#include "libft.h"

static void	rec_putnbr(long long int n, int fd)
{
	if (n > 10)
		rec_putnbr(n / 10, fd);
	ft_putchar_fd('0' + (n % 10), fd);
}

void	ft_putnbr_fd(int nbr, int fd)
{
	long long int	n;
	int		is_neg;

	n = (long long int)nbr;
	is_neg = n < 0;
	write(fd, "-", is_neg);
	n *= 1 - (2 * is_neg);
	rec_putnbr(n, fd);
}

/*
#include <fcntl.h>
#include <string.h>
#include <errno.h>
int	main(int argc, char *argv[])
{
	int	nbr;
	int	fd;

	if (argc > 1)
	{
		nbr = atoi(argv[1]);
		fd = open("nbrfd.txt", O_CREAT | O_RDWR| O_APPEND, 0777);
		ft_putstr("fd : ");
		ft_putnbr(fd);
		if (fd != -1)
		{
			ft_putnbr_fd(nbr, fd);
			close(fd);
		}
		else
		{
			ft_putstr("On a un probleme.\n");
			ft_putstr(strerror(errno));
		}
	}
	return (0);
}
*/
