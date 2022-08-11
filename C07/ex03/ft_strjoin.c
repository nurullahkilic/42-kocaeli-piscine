/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:23:03 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/09 15:23:05 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (*(src + i) != '\0')
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	return (dest);
}

int	ft_final_length(int size, char **strs, char *sep)
{
	int	sep_len;
	int	final_len;
	int	i;

	i = 0;
	final_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		final_len += ft_strlen(strs[i]);
		final_len += sep_len;
		i++;
	}
	final_len -= sep_len;
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		i;
	char	*string;
	char	null;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_final_length(size, strs, sep);
	string = (char *)malloc((full_length + 1) * sizeof(char));
	if (!string)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(string, strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(string, sep);
		}
		i++;
	}
	null = '\0';
	ft_strcpy(string, &null);
	return (string);
}
