/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:59:47 by ihormi            #+#    #+#             */
/*   Updated: 2021/09/27 21:22:46 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *str1, const char *str2, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < l && str1[i])
	{
		while ((i + j) < l && str2[j] && str1[i + j] == str2[j])
		{
			if (str2[j] == '\0')
				return ((char *)str1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
