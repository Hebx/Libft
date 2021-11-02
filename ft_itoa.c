/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 06:02:36 by ihormi            #+#    #+#             */
/*   Updated: 2021/10/09 17:57:08 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			i;
	int			len;
	long int	nb;
	char		*str;

	nb = n;
	len = ft_len(nb);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	i = 0;
	if (nb < 0)
	{
		str[i++] = '-';
		nb *= -1;
	}
	while (i < len)
	{
		str[--len] = ('0' + (nb % 10));
		nb = nb / 10;
	}
	return (str);
}
