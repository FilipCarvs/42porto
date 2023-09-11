/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:31:52 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/07 08:42:43 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

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
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (0);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*
int	main(int ac, char **av)
{
	(void) ac;
	printf("%i\n", ft_find_next_prime(atoi(av[1])));
}
*/
