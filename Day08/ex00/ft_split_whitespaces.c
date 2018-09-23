/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 06:22:58 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/19 06:23:00 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_verify_whitespace(char c)
{
	return (c == '\n' || c == '\t' || c == ' ');
}

int		count_words(char *str)
{
	int	word;
	int number_words;
	int i;

	word = 0;
	number_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && word == 0)
		{
			++number_words;
			word = 1;
		}
		else if ((str[i] == '\n' || str[i] == '\t' || str[i] == ' '))
		{
			word = 0;
		}
		++i;
	}
	return (number_words);
}

int		calculate_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && !(str[i] == '\n' ||
		str[i] == '\t' || str[i] == ' '))
		++i;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		word;
	int		i;
	int		length;
	int		nw;

	array = (char **)malloc(count_words(str) * sizeof(char *) + 1);
	word = 0;
	nw = 0;
	i = 0;
	while (str[i++] != '\0')
	{
		if (!ft_verify_whitespace(str[i - 1]) && word == 0)
		{
			word = 1;
			length = calculate_length(&str[i - 1]);
			array[nw] = (char *)malloc((length + 1) * sizeof(char));
			array[nw] = ft_strncpy(array[nw], &str[i - 1], length);
			nw++;
		}
		else if (ft_verify_whitespace(str[i - 1]))
			word = 0;
	}
	array[nw] = 0;
	return (array);
}
