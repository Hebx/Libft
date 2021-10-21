/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:01:31 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/12 01:36:53 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tlst;

	if (lst != 0)
	{
		if (*lst == 0)
			*lst = new;
		else if (new != 0)
		{
			tlst = ft_lstlast(*lst);
			tlst->next = new;
		}
	}
}
