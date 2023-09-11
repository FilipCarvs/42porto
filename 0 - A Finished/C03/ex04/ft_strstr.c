/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:49:14 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/03 10:38:18 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	j = 0;
	counter = 0;
	while (to_find[counter])
		counter++;
	if (counter == 0)
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if ((counter - 1) == j)
				return (&str[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	fonte[] = "ola eu sou uma mulher da vida ola queres os meus servissus?";
	char	fonte2[] = "teteste";
	char	encontra1[] = "ola q";
	char	encontra2[] = "x";
	char	encontra3[] = "\n";
	char	encontra4[] = "";
	char	encontra5[] = "teste";

	printf("ola q:    %s\n", ft_strstr(fonte, encontra1));
	printf("X char:   %s\n", ft_strstr(fonte, encontra2));
	printf("New line: %s\n", ft_strstr(fonte, encontra3));
	printf("Empty:    %s\n", ft_strstr(fonte, encontra4));
	printf("teste:    %s\n", ft_strstr(fonte2, encontra5));
}*/