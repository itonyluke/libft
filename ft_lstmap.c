#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *res;

	res = NULL;
	if (lst && f)
	{
		while (lst)
		{
			if (!(new = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&res, del);
				return (0);
			}
			ft_lstadd_back(&res, new);
			lst = lst->next;
		}
		return (res);
	}
	return (0);
}
