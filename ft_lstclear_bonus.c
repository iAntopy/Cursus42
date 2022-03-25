#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	cur = *lst;
	while (cur)
	{
		*lst = cur->next;
		ft_lstdelone(cur, del);
		cur = *lst;
	}
}
