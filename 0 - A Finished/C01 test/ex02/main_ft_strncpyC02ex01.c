/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncpyC02ex01.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:53:58 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/08/28 17:01:50 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>



char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > i && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(int argc, char **argv)
{
	int size = argc;

	char array[] = "Hello world!\n";
	char buffer[size];

	ft_strncpy(buffer, array, size);
	write(1, buffer, size);
	return (0);
}
