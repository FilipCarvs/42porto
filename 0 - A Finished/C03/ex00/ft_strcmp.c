/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:23:07 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/01 20:37:18 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i])
	{
		return ('\0' - s2[i]); 
	}
	return (0);
}
/*
int	main(void)
{
	char	st1[] = "";
	char	st2[] = "eud";
	char	st3[] = "fu";
	char	st4[] = "ae";
	char	st5[] = "**";
	char	st6[] = "ee";
	printf("1 - %d\n", strcmp(st1, st2));
	printf("1 - %d\n", ft_strcmp(st1, st2));
	printf("2 - %d\n", strcmp(st1, st3));
	printf("2 - %d\n", ft_strcmp(st1, st3));
	printf("3 - %d\n", strcmp(st1, st4));
	printf("3 - %d\n", ft_strcmp(st1, st4));
	printf("4 - %d\n", strcmp(st1, st5));
	printf("4 - %d\n", ft_strcmp(st1, st5));
	printf("5 - %d\n", strcmp(st1, st6));
	printf("5 - %d\n", ft_strcmp(st1, st6));
}
*/