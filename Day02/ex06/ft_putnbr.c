/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 01:36:16 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/04 01:14:13 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		power(int a, int b)
{
	int i;
	int j;

	if (b == 0)
	{
		return (1);
	}
	else
	{
		i = 1;
		j = a;
		while (i < b)
		{
			j = j * a;
			i++;
		}
	}
	return (j);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		j;
	long	big;
	char	ic;

	i = 9;
	big = nb;
	if (big < 0)
	{
		big = big * -1;
		ft_putchar('-');
	}
	while (i >= 1)
	{
		j = big / power(10, i);
		j = j % 10;
		ic = j + '0';
		if (j != 0)
		{
			ft_putchar(ic);
		}
		i--;
	}
	ft_putchar((big % 10) + '0');
}
