#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *ptr;

	if (!(ptr = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
