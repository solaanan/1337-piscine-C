/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 22:38:00 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/17 22:38:01 by slaanani         ###   ########.fr       */
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
