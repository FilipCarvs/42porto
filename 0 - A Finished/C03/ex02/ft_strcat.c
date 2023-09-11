/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:23:07 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/01 21:09:02 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[j])
	{
		dest[count] = src[j];
		count++;
		j++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	st1[] = "eu sou ricaaaaa";
	char	st7[] = "eu sou ricaaaaa";
	char	st8[] = "eu sou ricaaaaa";
	char	st9[] = "eu sou ricaaaaa";
	char	st10[] = "eu sou ricaaaaa";
	char	st11[] = "eu sou ricaaaaa";
	char	st12[] = "eu sou ricaaaaa";
	char	st13[] = "eu sou ricaaaaa";
	char	st14[] = "eu sou ricaaaaa";
	char	st15[] = "eu sou ricaaaaa";

	char	st2[] = "11eu sou";
	char	st3[] = "fu";
	char	st4[] = "ae";
	char	st5[] = "**";
	char	st6[] = "";
	printf("1 - %s\n", strcat(st1, st2));
	printf("1 - %s\n", ft_strcat(st7, st2));
	printf("2 - %s\n", strcat(st8, st3));
	printf("2 - %s\n", ft_strcat(st9, st3));
	printf("3 - %s\n", strcat(st10, st4));
	printf("3 - %s\n", ft_strcat(st11, st4));
	printf("4 - %s\n", strcat(st12, st5));
	printf("4 - %s\n", ft_strcat(st13, st5));
	printf("5 - %s\n", strcat(st14, st6));
	printf("5 - %s\n", ft_strcat(st15, st6));
}*/