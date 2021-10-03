#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst->next)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
