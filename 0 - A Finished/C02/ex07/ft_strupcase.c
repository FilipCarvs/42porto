/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:27:08 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/08/30 12:29:47 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
/*
int main(void)
{
	char pipipopo[] = "agaghaAHA  aaahjaj AAJ jajaj122";
	ft_strupcase(pipipopo);
	printf("%s", pipipopo);


}
*/
