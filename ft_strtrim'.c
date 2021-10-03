/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:59:37 by hebx              #+#    #+#             */
/*   Updated: 2021/10/03 15:57:49 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		set_len;
	unsigned int		j;
	int					found;
	char				*sptr;
	unsigned int		i;
	unsigned int		set_counter; //remove to get strchr

	set_len = ft_strlen(set);
	sptr = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (set_len == 0)
	{
		ft_strcpy(sptr, s1);
		return (sptr);
	}
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		set_counter = 0;
		found = 0;
		while (set_counter < set_len && found == 0)
		{
			if (s1[i] == set[set_counter])
				found = 1;
			++set_counter;
		}
		if (found == 0)
		{
			sptr[j] = s1[i];
			++j;
		}
		++i;
	}
	sptr[j] = '\0';
	return (sptr);
}
