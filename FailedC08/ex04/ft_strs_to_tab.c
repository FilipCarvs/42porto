/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:38:43 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/12 20:31:17 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i > 0)
		return (i);
	return (1);
}

char	*ft_strcpy(char *origin, char *copy)
{
	int	i;

	i = 0;
	while (origin[i])
	{
		copy[i] = origin[i];
		i++;
	}
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*my;

	my = malloc(sizeof(t_stock_str) * (ac + 1));
	if (my == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		my[i].str = av[i];
		j = ft_strlen(my[i].str);
		my[i].size = j;
		my[i].copy = (char *)malloc(sizeof(char) * (j + 1));
		ft_strcpy(my[i].str, my[i].copy);
		i++;
	}
	my[i].str = 0;
	return (my);
}


int	main(int ac, char **av)
{
	int i;

	i = 0;
	while(i < (ac + 1))
	{
		printf("%s\n", ft_strs_to_tab(ac, av)[i].str);
		printf("%s\n", ft_strs_to_tab(ac, av)[i].copy);
		printf("%i\n", ft_strs_to_tab(ac, av)[i++].size);
	}
	return (0);
}


