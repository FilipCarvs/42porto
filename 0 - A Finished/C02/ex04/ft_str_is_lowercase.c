/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:27:08 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/08/30 10:09:37 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char arrafonte1[] = "";
	char arrafonte2[] = "aaaaAaa";
	char arrafonte3[] = "aaaaaaa";
	int lol;
	int lol2;
	int lol3;

	lol = ft_str_is_lowercase(arrafonte1);
	lol2 = ft_str_is_lowercase(arrafonte2);
	lol3 = ft_str_is_lowercase(arrafonte3);

	printf("%i", lol);
	printf("%i", lol2);
	printf("%i", lol3);
}
*/
