/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:54:15 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/08 11:54:17 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (nb == 0 && power == 0)
		return (1);
	else if (power <= 0)
	{
		if (power == 0)
			return (1);
		return (0);
	}
	else if (power > 0)
	{
		result = 1;
		while (power != 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
	return (0);
}
