/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:08:14 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/09 01:26:03 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len && start <= (unsigned int)ft_strlen(s))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
