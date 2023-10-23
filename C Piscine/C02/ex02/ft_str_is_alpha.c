/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:27:08 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/08/30 09:41:20 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') 
			|| (str[i] <= 'z' && str[i] >= 'a'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char	string[] = "aAi";
	int	a;
	a = ft_str_is_alpha(string);
	printf("%i", a);

}
*/
