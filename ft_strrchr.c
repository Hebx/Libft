/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:09:41 by ihormi            #+#    #+#             */
/*   Updated: 2021/09/27 18:14:00 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *str, int c)
{
	int			i;
	const char	*str_i;

	str_i = str;
	i = ft_strlen(str);
	str = (str + i);
	while (*str != *str_i && c != *str)
		str--;
	if (c == *str)
		return ((char *)str);
	return (0);
}
