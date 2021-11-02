/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 02:41:12 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/04 02:46:17 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = -1;
	if (len == 0)
		return (dst);
	if (src[0] != '\0')
		while (src[++i] != '\0' && i < len)
			dst[i] = src[i];
	else
		dst[++i] = '\0';
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
