/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 03:07:50 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/06 06:04:53 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		skipspace(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] == ' ')
	{
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int s;
	int r;

	i = skipspace(str);
	s = 1;
	r = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			s = -1;
		}
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	r = s * r;
	return (r);
}
