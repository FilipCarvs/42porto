/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:20:25 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/03 19:47:02 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	state;

	i = 0;
	j = 0;
	state = 1;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			state *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j *= 10;
		j += str[i] - '0';
		i++;
	}
	return (j * state);
}
/*
int	main(void)
{
	char a[] = "eqw123322-";
	char b[] = "23322e-";
	char c[] = "+-+-+123322-";
	char d[] = "33";
	char e[] = "2332-";
	char f[] = "-+--+-+-123322";
	printf("1  %i\n", ft_atoi(a));
	printf("2  %i\n", ft_atoi(b));
	printf("3  %i\n", ft_atoi(c));
	printf("4  %i\n", ft_atoi(d));
	printf("5  %i\n", ft_atoi(e));
	printf("6  %i\n", ft_atoi(f));
}
*/