/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:34:53 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/01 01:33:59 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	d = (char *)dst;
	s = (char *)src;
	if (d == 0 && s == 0)
		return (0);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (i)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dst);
}
