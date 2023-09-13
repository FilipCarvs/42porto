/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:08:26 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/12 20:44:10 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	int		j;

	i = 0;
	while (par[i].str != 0)
	{
		j = 0;
		while (par[i].str[j] != '\0')
		{
			write(1, &(par[i].str[j]), 1);
			j++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = 0;
		while (par[i].str[j] != '\0')
		{
			write(1, &(par[i].copy[j]), 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	ft_putnbr(int nb)
{
	char	n;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb = nb * (-1);
		}
		if (nb <= 9)
		{
			n = nb + '0';
			write(1, &n, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
