/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:27:08 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/08/30 09:56:57 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char arrafonte[] = "121A21212";
	char destino[sizeof(arrafonte)];
	int lol;

	lol = ft_str_is_numeric(arrafonte);

	printf("%i", lol);
}
*/
