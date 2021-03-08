#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	temp = *lst;
	while (temp)
	{
		temp = temp->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
