/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:06:10 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/01 04:47:54 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_res(size_t	r, int s, int i)
{
	if (i > 19 || r > 9223372036854775807)
	{
		if (s == 1)
			return (-1);
		else
			return (0);
	}
	return (r * s);
}

int	ft_atoi(const char *str)
{
	unsigned int		i;
	long int			s;
	long int			r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] && (str[i] == '\v' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == ' '
			|| str[i] == '\f' || str[i] == '\n'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		r = r * 10 + (str[i++] - '0');
	return (ft_res(r, s, i));
}
