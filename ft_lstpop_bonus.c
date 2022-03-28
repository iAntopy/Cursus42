#include "libft.h"

void	*ft_lstpop(t_list **lst, unsigned int index)
{
	t_list	*elem;
	t_list	*elem_swap;
	void	*content;

	if (!(*lst))
		return (NULL);
	elem = *lst;
	if (index == 0)
	{
		*lst = elem->next;
		content = elem->content;
		free(elem);
		return (content);
	}
	while (--index && elem->next)
		elem = elem->next;
	if (index)
		return (NULL);
	elem_swap = elem->next;
	content = elem_swap->content;
	elem->next = elem->next->next;
	free(elem_swap);
	return (content);
}
