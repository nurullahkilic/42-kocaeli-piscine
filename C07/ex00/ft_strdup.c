/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:50:16 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/09 14:50:18 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	while (*(src + i) != '\0')
		i++;
	new = (char *)malloc(i * sizeof(char) + 1);
	if (!new)
	{
		return (0);
	}
	i = 0;
	while (*(src + i) != '\0')
	{
		*(new + i) = *(src + i);
		i++;
	}
	*(new + i) = '\0';
	return (new);
}
