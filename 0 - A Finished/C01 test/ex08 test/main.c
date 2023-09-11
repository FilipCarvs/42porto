/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:17:07 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/08/27 16:32:04 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int	size);

int	main(void)
{
	int order[] = {2, 3, 4, 10, 1, 5, 8, 7, 6};
	int *ptr = &order[0];

	ft_sort_int_tab(ptr, 9);

	int x = 0;
	while (x < 9)
	{
		printf("%i", order[x]);
				x++;
	}
}
