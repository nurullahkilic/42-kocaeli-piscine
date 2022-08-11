/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:54:09 by nukilic           #+#    #+#             */
/*   Updated: 2022/07/28 13:54:12 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	loop;
	int	firstselector;
	int	secondselector;
	int	temp;

	loop = 0;
	while (loop < size)
	{
		i = 0;
		while (i < size - 1)
		{
			firstselector = *(tab + i);
			secondselector = *(tab + i + 1);
			if (firstselector > secondselector)
			{
				temp = *(tab + i + 1);
				*(tab + i + 1) = *(tab + i);
				*(tab + i) = temp;
			}
			i++;
		}
		loop++;
	}
}
