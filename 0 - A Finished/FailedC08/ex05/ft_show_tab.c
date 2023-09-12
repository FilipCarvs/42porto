/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:08:26 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/12 20:30:57 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int nbr)
{
	long	n;
	char	c;

	n = nbr;
	if (n < 0)
	{
		n = n - 1;
		write(1, "-", 1);
	}
	if (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str != 0)
	{
		j = 0;
		while (par[i].str[j])
			write(1, &par[i].str[j++], 1);
		write(1, "\n", 1);
		j = 0;
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		while (par[i].copy[j])
			write(1, &par[i].copy[j++], 1);
		write(1, "\n", 1);
		i++;
	}
}
/*
int	main(int ac, char **av)
{
	t_stock_str *myst;
	myst = ft_strs_to_tab(ac, av);
	ft_show_tab(myst);
	return (0);
}
*/