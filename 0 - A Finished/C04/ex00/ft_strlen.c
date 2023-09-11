/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:01:24 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/03 15:19:43 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int main(void)
{
    char    stri[] = "bacalau con nates!";
    int b = strlen(stri);
    printf("%d original \n", b);
    printf("%d sizeof\n", d);
    printf("%d Minha\n", ft_strlen(stri));
}
*/
