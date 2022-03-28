#include "libft.h"

t_list	*ft_lstcreate(void *content, size_t size)
{
	void	*data;
	t_list	*lst;

	data = malloc(size);
	ft_memcpy(data, content, size);
	lst = ft_lstnew(data);
	return (lst);
}
