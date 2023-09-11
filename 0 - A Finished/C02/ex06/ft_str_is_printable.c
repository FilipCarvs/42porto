/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:27:08 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/08/30 10:26:56 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int main (void)
{
	char a[] = "2121212 ahdhagfs";
	int x = ft_str_is_printable(a);
	printf("%i", x);
}
*/
