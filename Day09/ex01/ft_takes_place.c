/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 18:06:00 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/06 18:06:02 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	unsigned int	nbr;
	char			c;

	if (n < 0)
	{
		write(1, "-", 1);
		nbr = n * -1;
	}
	else
		nbr = n;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + 48;
	write(1, &c, 1);
}

void	print(int hour, char hr, int e, char d)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	ft_putnbr(hour);
	write(1, ".00 ", 4);
	write(1, &hr, 1);
	write(1, ".M. AND ", 8);
	ft_putnbr(e);
	write(1, ".00 ", 4);
	write(1, &d, 1);
	write(1, ".M.\n", 4);
}

void	ft_takes_place(int hour)
{
	int		e;
	char	hr;
	char	d;

	hr = 'A';
	d = 'A';
	e = hour + 1;
	if (hour >= 12)
	{
		hr = 'P';
		if (hour > 12)
			hour -= 12;
	}
	if (hour == 0)
		hour = 12;
	if (e >= 12 && e < 24)
	{
		d = 'P';
		if (e > 12)
			e -= 12;
	}
	if (e == 0 || e == 24)
		e = 12;
	print(hour, hr, e, d);
}
