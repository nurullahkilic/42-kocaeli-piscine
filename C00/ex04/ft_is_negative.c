/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:49:01 by nukilic           #+#    #+#             */
/*   Updated: 2022/07/25 15:49:04 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int num)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (num >= 0)
	{
		write(1, &pos, 1);
	}
	else if (num < 0)
	{
		write(1, &neg, 1);
	}
}
