/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:03:05 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/09 15:03:07 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	div;
	int	i;

	div = max - min;
	if (div <= 0)
		return (0);
	numbers = (int *)malloc(div * sizeof(int));
	if (!numbers)
		return (0);
	i = 0;
	while (i < div)
	{
		*(numbers + i) = min + i;
		i++;
	}
	return (numbers);
}
