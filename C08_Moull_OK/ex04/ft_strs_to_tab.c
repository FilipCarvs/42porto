/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:38:43 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/12 20:50:00 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char *src);
char	*ft_strdup(char *src);
void	ft_show_tab(struct s_stock_str *par);

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
