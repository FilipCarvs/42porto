/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:09:49 by masoares          #+#    #+#             */
/*   Updated: 2023/09/11 20:31:55 by masoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb);
int		ft_strlen(char *src);
char	*ft_strdup(char *src);

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptr;

	i = 0;
	ptr = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (ptr == NULL)
		return (NULL);
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}

int	ft_strlen(char	*src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	s = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
}
