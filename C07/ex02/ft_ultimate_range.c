/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:16:52 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/09 15:16:55 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*numbers;
	int	div;
	int	i;

	div = max - min;
	if (div <= 0)
	{
		*range = 0;
		return (0);
	}
	numbers = (int *)malloc(div * sizeof(int));
	if (!numbers)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < div)
	{
		*(numbers + i) = min + i;
		i++;
	}
	*range = numbers;
	return (div);
}
