#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;

	if (lst)
	{
		list = (*f)(lst);
		list->next = ft_lstmap(lst->next, (*f));
		return (list);
	}
	return (NULL);
}
