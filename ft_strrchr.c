/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:09:41 by ihormi            #+#    #+#             */
/*   Updated: 2021/09/29 20:51:58 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	*str_i;

	str_i = str;
	i = ft_strlen(str);
	str = (str + i);
	while (*str != *str_i && c != *str)
		str--;
	if (c == *str)
		return ((char *)str);
	return (0);
}
