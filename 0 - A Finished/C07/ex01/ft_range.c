/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:04:47 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/09 20:44:53 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nums;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	nums = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		nums[i++] = min;
		min++;
	}
	return (nums);
}
/*
int main()
{
	int *c;
	c = ft_range(3, 6);
	printf("0 - %i\n", ft_range(3, 6)[0]);
	printf("1 - %i\n", c[1]);
	printf("2 - %i\n", c[2]);
}
*/
