/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 22:15:57 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/09 22:45:29 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = array;
	while (min < max)
	{
		array[i++] = min;
		min++;
	}
	return (i);
}
/*
int main()
{
	int *p;
	int **pp = &p;
	
	int i = ft_ultimate_range(pp, 3, 6);
	printf("%i\n", i);
	printf("%i\n", pp[0][1]);
	//printf("%i\n", *pp[0]);
}
*/
