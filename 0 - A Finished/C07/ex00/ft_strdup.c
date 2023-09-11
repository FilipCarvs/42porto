/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:33:55 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/09 20:35:09 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		l;
	int		i;
	char	*dup;

	l = 0;
	while (src[l])
		l++;
	dup = (char *)malloc(sizeof(char) * (l + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
int main()
{
	char pi[] = "chupa meu";
	printf("%s\n", ft_strdup(pi));
	printf("%s\n", pi);
}
*/
