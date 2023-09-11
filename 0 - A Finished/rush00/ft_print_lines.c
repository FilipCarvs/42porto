/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:26:09 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/08/26 15:57:43 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);
void	print1(int x);
void	print2(int x);
void	print3(int x);

void	print1(int x)
{
	int	l1;

	l1 = x;
	ft_putchar('A');
	l1--;
	if (x == 1)
        {
                ft_putchar('\n');
        }
	else if (x == 2)
        {
                ft_putchar('A');
                ft_putchar('\n');
        }
	else if (x > 2)
	{
		while (l1 > 1)
		{
			ft_putchar('B');
			l1--;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	print2(int x)
{
	int	l2;

	l2 = x;
	write(1, "B", 1);
	l2--;
	if (x == 1)
        {
                ft_putchar('\n');
        }
	else if (x == 2)
        {
                write(1, "B\n", 2);
        }
	else if (x > 2)
	{
		while (l2 > 1)
		{
			write(1, " ", 1);
			l2--;
		}
		write(1, "B\n", 2);
	}
}

void	print3(int x)
{
	int	l3;

	l3 = x;
	write(1, "C", 1);
	l3--;
	if (x == 1)
        {
                ft_putchar('\n');
        }
	else if (x == 2)
        {
                write(1, "C\n", 2);
        }
	else if (x > 2)
	{
		while (l3 > 1)
		{
			write(1, "B", 1);
			l3--;
		}
		write(1, "C\n", 2);
	}
}
