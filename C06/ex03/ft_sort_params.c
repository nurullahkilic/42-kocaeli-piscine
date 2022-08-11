/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:59:37 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/04 12:59:39 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		if (*(s1 + i) == *(s2 + i))
			i++;
		if (*(s1 + i) < *(s2 + i) || *(s1 + i) > *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
	}
	return (3);
}

int	main(int argc, char **args)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(*(args + j), *(args + j + 1)) > 0)
			{
				ft_swap((args + j), (args + j + 1));
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(*(args + j));
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
