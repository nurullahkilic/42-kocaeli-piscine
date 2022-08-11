/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:30:05 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/04 12:30:10 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **args)
{
	int	i;

	i = 0;
	while (*(args[0] + i) != '\0' && argc)
	{
		write(1, (args[0] + i), 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
