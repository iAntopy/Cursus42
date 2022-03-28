#include "libft.h"

int	ft_lst_average(t_list *lst)
{
	int	size;
	int	total;

	size = 0;
	total = 0;
	while (lst)
	{
		total += *(int *)(lst->content);
		size++;
		lst = lst->next
	}
	return (total / size);
}
