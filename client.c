/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:31:03 by alozen            #+#    #+#             */
/*   Updated: 2023/07/07 15:14:42 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_sigctrl;

void	kill_func(int pid, char c)
{
	int	i;

	i = 0;
	while (i <= 7)
	{
		if ((c >> i) & 1)
			g_sigctrl = kill(pid, SIGUSR1);
		else
			g_sigctrl = kill(pid, SIGUSR2);
		i++;
		usleep(200);
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	g_sigctrl = -1;
	if (ac == 3)
		while (av[2][i])
			kill_func(ft_atoi(av[1]), av[2][i++]);
	else
	{
		ft_printf("You've entered too many or too few argument !\n");
		return (1);
	}
	if (g_sigctrl == 0)
		ft_printf("You've been sent the signal succesfully !\n");
	else
		ft_printf("You couldn't send the signal successfully !\n");
	return (0);
}
