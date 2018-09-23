/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <sohaib.laanani@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 17:44:18 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/03 05:09:17 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_zero(int n)
{
	char	fc;
	char	sc;
	int		fd;
	int		sd;

	fd = n / 10;
	sd = n % 10;
	fc = fd + '0';
	sc = sd + '0';
	ft_putchar(fc);
	ft_putchar(sc);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_zero(a);
			ft_putchar(' ');
			ft_zero(b);
			if (a != 98 || b != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
