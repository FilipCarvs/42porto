/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:53:55 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/09/03 22:44:56 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	conversion_print(int nb, char *base, int size);
void	ft_putnbr_base(int nbr, char *base);
int		is_negative(int num);
int		base_size(char *str);
int		basechecker(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		size;
	char	minus;

	i = 0;
	minus = '-';
	size = base_size(base);
	if (basechecker(base) < 1)
		return ;
	else if (is_negative(nbr))
	{
		nbr *= -1;
		write(1, &minus, 1);
	}
	conversion_print(nbr, base, size);
}

//if it is negative it will return 1 and we want to make sure we print
int	is_negative(int num)
{
	if (num < 0)
		return (1);
	else
		return (0);
}

//checks for all the problems we want to avoid.
int	basechecker(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	if (i < 2)
		return (0);
	else
		return (i);
}

//size of base
int	base_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	conversion_print(int nb, char *base, int size)
{
	int	n;

	if (nb >= 0 && nb < size)
		write(1, &base[nb], 1);
	else
	{
		n = nb / size;
		conversion_print(n, base, size);
		n = nb % size;
		conversion_print(n, base, size);
	}
	return ;
}

int	main(void)
{
	char base1[] = "AB";
	int	number = 2;
	ft_putnbr_base(number, base1);
}

