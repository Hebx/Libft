/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:14:05 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/11 21:16:46 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tlst;

	if (lst != 0)
	{
		while (*lst != 0)
		{
			tlst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tlst;
		}
	}
}
