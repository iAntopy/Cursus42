#include "libft.h"

void	*ft_lstpop(t_list **lst, unsigned int index)
{
	t_list	*elem;
	void	*content;

	if (!(*lst))
		return (NULL);
	elem = *lst;
	if (index == 0)
	{
		*lst = (*lst)->next;
		content = elem->content;
		free(elem);
		return (content);
	}
	while (--index && elem->next)
		elem = elem->next;
	if (index)
		return (NULL);
	else
	{
		content = elem->next->content;
		if (elem->next->next)
			elem->next = elem->next->next;
		else
		free(elem->next);
	}
	return (content);
}
