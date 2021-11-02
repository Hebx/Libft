/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:08:36 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/03 22:29:29 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;
	char	*str;

	if (s1 == 0 || set == 0)
		return (0);
	while (*s1 != '\0' && ft_strchr(set, *s1) != 0)
		s1++;
	l = ft_strlen(s1);
	while (l > 0 && ft_strchr(set, s1[l]) != 0)
		l--;
	str = ft_substr((char *)s1, 0, l + 1);
	return (str);
}
