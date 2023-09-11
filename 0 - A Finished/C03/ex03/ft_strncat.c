/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:23:07 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/03 13:43:42 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
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
	char	st14[] = "eu sou ricaaaaa 1";
	char	st15[] = "eu sou ricaaaaa 1";
	char	st2[] = "eu sou";
	char	st3[] = "fu";
	char	st4[] = "ae";
	char	st5[] = "**";
	char	st6[] = "";
	printf("1 - %s\n", strncat(st1, st2, 2));
	printf("1 - %s\n", ft_strncat(st7, st2, 2));
	printf("2 - %s\n", strncat(st8, st3, 10));
	printf("2 - %s\n", ft_strncat(st9, st3, 10));
	printf("3 - %s\n", strncat(st10, st4, 3));
	printf("3 - %s\n", ft_strncat(st11, st4, 3));
	printf("4 - %s\n", strncat(st12, st5, 3));
	printf("4 - %s\n", ft_strncat(st13, st5, 3));
	printf("5 - %s\n", strncat(st14, st6, 3));
	printf("5 - %s\n", ft_strncat(st15, st6, 3));
}
*/