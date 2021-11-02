/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:59:47 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/01 00:26:51 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	i = 0;
	if (*needle == '\0')
		return (str);
	while (i < len && haystack[i])
	{
		j = 0;
		while ((i + j) < len && needle[j]
			&& haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
