/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:27:35 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/05 22:12:20 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nborigin;

	nborigin = nb;
	if (power == 0 || nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (--power > 0)
		nb *= nborigin;
	return (nb);
}
/*
int main(void)
{
	printf("%i", ft_iterative_power(-10, 3));
}
*/
