/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 08:40:22 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/07 08:41:03 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1 || nb == 4)
		return (0);
	else if (nb == 3)
		return (1);
	i = 2;
	while (i < nb / i)
	{
		if ((nb % i) != 0)
			return (0);
		i++;
	}
	return (1);
}


int	main(int ac, char **av)
{
	(void) ac;
	printf("%i\n", ft_is_prime(atoi(av[1])));
}

