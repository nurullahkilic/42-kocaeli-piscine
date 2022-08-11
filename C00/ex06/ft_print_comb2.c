/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:23:32 by nukilic           #+#    #+#             */
/*   Updated: 2022/07/25 16:23:36 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inttochar(int number)
{
	char	a;
	char	b;

	a = (number / 10) + '0';
	b = (number % 10) + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putchar(int firstNumber, int secondNumber)
{
	ft_inttochar(firstNumber);
	write(1, " ", 1);
	ft_inttochar(secondNumber);
	if (firstNumber != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 1;
	while (first <= 98)
	{
		while (second <= 99)
		{
			ft_putchar(first, second);
			second++;
		}
		first++;
		second = first + 1;
	}
}
