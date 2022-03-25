#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*crs;

	if (!lst)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	crs = new;
	while (lst)
	{
		crs->next = ft_lstnew(f(lst->content));
		if (!(crs->next))
		{
			ft_lstclear(&new, del);
			break ;
		}
		lst = lst->next;
		crs = crs->next;
	}
	return (new);
}

