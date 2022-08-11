/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:49:01 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/04 12:49:03 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **args)
{
	int	i;
	int	j;

	j = argc - 1;
	while (argc && j != 0)
	{
		i = 0;
		while (*(args[j] + i) != '\0')
		{
			write(1, (args[j] + i), 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
