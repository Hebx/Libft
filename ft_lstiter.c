/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:19:00 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/11 23:15:06 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f != NULL)
	{
		while (lst != NULL)
		{
			if (lst->content != NULL)
				f(lst->content);
			lst = lst->next;
		}
	}
}
