/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:49:46 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/08 14:49:48 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	number;

	number = nb;
	if (number <= 0)
	{
		return (0);
	}
	if (number == 1)
	{
		return (1);
	}
	i = 2;
	while (i * i <= number)
	{
		if (i * i == number)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
