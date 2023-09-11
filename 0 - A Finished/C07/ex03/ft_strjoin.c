/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 07:12:35 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/11 08:11:45 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_give_memory(int size, char **strs, char *sep)
{
	char	*str;
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (i < size)
		l += ft_strlen(strs[i++]);
	l += (ft_strlen(sep) * size - 1);
	if (size <= 0)
		l = 1;
	str = (char *)malloc(sizeof(char) * l);
	if (str == NULL)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = ft_give_memory(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			str[k++] = sep[j++];
	}
	str[k] = '\0';
	return (str);
}


int main (int argc, char *argv[])
{
	printf("%s", ft_strjoin(argc - 1, argv+1, ", "));
}

/*
int main(void)
{
	char *s1 = "Maria";
	char *s2 = "albertina deixa";
	char *s3 = "que";
	char *s4 = "te";
	char *s5 = "digaaaa";
	char *s6 = "tens uma";
	char *s7 = "pila!";
	char *sep = ".|.";
	char *strs[] = {s1, s2, s3, s4, s5, s6, s7};
	printf("%s", ft_strjoin(7, strs, sep));
}
*/
