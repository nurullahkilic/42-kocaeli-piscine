/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:58:33 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/02 17:58:36 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*(to_find + j) == '\0')
		return (str);
	while (*(str + i) != '\0')
	{
		if (*(str + i + j) == *(to_find + j) && *(str + i + j) != '\0')
		{
			if (*(to_find + j + 1) == '\0')
				return (str + i);
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
