/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:38:26 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/04 12:38:29 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **args)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc && argc)
	{
		i = 0;
		while (*(args[j] + i) != '\0')
		{
			write(1, (args[j] + i), 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
