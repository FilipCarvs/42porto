/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:00:04 by luis-ffe          #+#    #+#             */
/*   Updated: 2023/08/26 16:06:56 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print1(int x);
void	print2(int x);
void	print3(int x);
void	rush(int x, int y);

void	rush(int x, int y)
{
	int	h;

	h = y - 1;
	if (x > 0 && y > 0)
	{
		print1(x);
		if (y == 2)
		{
			print3(x);
		}
		else if (y > 2)
		{
			while (h > 1)
			{
				print2(x);
				h--;
			}
			print3(x);
		}
	}
	else
	{
		write(1, "Choose numbers greater than zero!", 33); 
	}
}
