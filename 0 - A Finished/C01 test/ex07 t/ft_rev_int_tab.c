/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:51:22 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/08/27 15:27:43 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size)
	{
		tmp = tab[size -1];
		tab[size - 1] = tab[i];
		tab[i] = tmp;
		i++;
		size--;
	}
}

int main(void)
{
	int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int *p = &num[0];

	ft_rev_int_tab(p, 10);
int i = 0;

	while (10 > i)
	{
		printf("%i", num[i]);
		i++;
	}
}
