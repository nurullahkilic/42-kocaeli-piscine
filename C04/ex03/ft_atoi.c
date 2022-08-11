/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:26:38 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/02 11:26:40 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	clean(char *str, int *index)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (*(str + i) == 32 || (*(str + i) >= 9 && *(str + i) <= 13))
	{
		i++;
	}
	while (*(str + i) && (*(str + i) == 43 || *(str + i) == 45))
	{
		if (*(str + i) == 45)
		{
			result *= -1;
		}
		i++;
	}
	*index = i;
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign_of_num;
	int	nm;

	sign_of_num = clean(str, &i);
	nm = 0;
	while (*(str + i) && (*(str + i) >= 48 && *(str + i) <= 57))
	{
		nm *= 10;
		nm += (*(str + i) - 48);
		i++;
	}
	return (nm * sign_of_num);
}
