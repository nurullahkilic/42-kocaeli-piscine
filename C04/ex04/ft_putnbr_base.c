/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:01:23 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/02 17:01:25 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int	is_error(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	i = 0;
	if (*(base + i) == '\0' || len == 1)
		return (0);
	while (*(base + i) != '\0')
	{
		if (*(base + i) <= 32 || *(base + i) == 127 || *(base + i) == 43
			|| *(base + i) == 45)
			return (1);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (*(base + i) == *(base + j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		error;
	long	nb;

	error = is_error(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}
