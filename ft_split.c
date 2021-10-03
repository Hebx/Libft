/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 22:47:21 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/04 03:16:41 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ctword(const char *s, char c)
{
	unsigned int	i;
	int				ct;

	i = 0;
	ct = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			ct++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (ct);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		k;
	int		j;
	int		i;

	i = 0;
	k = 0;
	str = malloc(sizeof(char *) * (ft_ctword(s, c) + 1));
	if (s == 0 || (!str))
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			str[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	str[k] = NULL;
	return (str);
}
