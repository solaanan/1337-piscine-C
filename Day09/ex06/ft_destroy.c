/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 02:29:17 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/07 02:30:40 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	while (factory[i] != 0)
	{
		j = 0;
		while (factory[i][j] != 0)
		{
			free(factrory[i][j]);
			j++;
		}
		free(factory[i]);
	}
	free(factory);
}
