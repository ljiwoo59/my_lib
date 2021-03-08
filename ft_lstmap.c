#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ptr;
	t_list *temp;

	ptr = 0;
	while (lst)
	{
		if (!(temp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		ft_lstadd_back(&ptr, temp);
		lst = lst->next;
	}
	return (ptr);
}
