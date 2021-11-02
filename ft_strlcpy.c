/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:41:00 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/01 00:34:27 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = -1;
	if (dstsize == 0)
		i++;
	else
	{
		while (src[++i] && i < dstsize - 1)
			dst[i] = src[i];
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
