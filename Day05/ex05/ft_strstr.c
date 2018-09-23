/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 23:35:37 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/11 23:35:38 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		y;
	char	*found;

	found = 0;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			found = str + i;
			y = 0;
			while (str[i + y] == to_find[y])
			{
				if (to_find[y + 1] == '\0')
					return (found);
				y++;
			}
			found = 0;
		}
		i++;
	}
	return (0);
}
