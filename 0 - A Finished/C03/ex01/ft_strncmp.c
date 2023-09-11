/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:23:07 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/03 10:47:20 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	st1[] = "eu sou ricaaaaa";
	char	st2[] = "eu sou";
	char	st3[] = "fu";
	char	st4[] = "ae";
	char	st5[] = "**";
	char	st6[] = "";
	printf("1 - %d\n", strncmp(st1, st2, 10));
	printf("1 - %d\n", ft_strncmp(st1, st2, 10));
	printf("2 - %d\n", strncmp(st1, st3, 1));
	printf("2 - %d\n", ft_strncmp(st1, st3, 1));
	printf("3 - %d\n", strncmp(st1, st4, 0));
	printf("3 - %d\n", ft_strncmp(st1, st4, 0));
	printf("4 - %d\n", strncmp(st1, st5, 5));
	printf("4 - %d\n", ft_strncmp(st1, st5, 5));
	printf("5 - %d\n", strncmp(st1, st6, 2));
	printf("5 - %d\n", ft_strncmp(st1, st6, 2));
}
*/