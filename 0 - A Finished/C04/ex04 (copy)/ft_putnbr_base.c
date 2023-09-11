/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:53:55 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/03 22:44:56 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	basechecker(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	if (i < 2)
		return (0);
	else
		return (i);
}

int main ()
{
	basechecker("AB");
}

