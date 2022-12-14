/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:28:53 by nukilic           #+#    #+#             */
/*   Updated: 2022/08/01 14:28:55 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && (*(s1 + i) != '\0' || *(s2 + i) != '\0'))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
