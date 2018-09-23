/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 00:14:10 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/18 00:14:11 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;
	int j;

	i = min;
	j = 0;
	if (min < max)
	{
		range = (int*)malloc(sizeof(int) * (max - min));
		while (i < max)
		{
			range[j] = i;
			i++;
			j++;
		}
		return (range);
	}
	else
		return ((void*)0);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
