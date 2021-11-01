/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihormi <ihormi@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:18:28 by ihormi            #+#    #+#             */
/*   Updated: 2021/11/01 07:17:04 by ihormi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_pid(void)
{
	char	*pid;

	pid = ft_itoa(getpid());
	write(2, "pid: ", 5);
	write(2, pid, ft_strlen(pid));
	write(2, "\n", 1);
}

static void	send_m(int sig)
{
	static int	str;
	static int	byte;

	if (byte == 0)
		byte = 128;
	if (sig == SIGUSR1)
		str = str + byte;
	byte = byte / 2;
	if (byte == 0)
	{
		write(1, &str, 1);
		str = 0;
	}
}

int	main(void)
{
	ft_pid();
	signal(SIGUSR1, send_m);
	signal(SIGUSR2, send_m);
	while (1)
		pause();
	return (0);
}
