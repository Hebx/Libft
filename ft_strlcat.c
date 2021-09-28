/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:56:43 by ihormi            #+#    #+#             */
/*   Updated: 2021/09/27 15:06:45 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_l;
	size_t	src_l;
	size_t	size;

	i = 0;
	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (dstsize == 0)
		return (src_l);
	if (dstsize < dst_l)
		size = src_l + dstsize;
	else
		size = src_l + dst_l;
	while (src[i++] && ((i + dst_l) < (dstsize)))
		dst[i + dst_l - 1] = src[i - 1];
	dst[i + dst_l - 1] = '\0';
	return (size);
}
