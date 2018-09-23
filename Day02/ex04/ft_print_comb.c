/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <sohaib.laanani@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 15:28:55 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/03 02:50:14 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_put3char(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	if (z != '\0')
	{
		ft_putchar(z);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '6')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_put3char(a, b, c);
				ft_put3char(',', ' ', '\0');
				c++;
			}
			b++;
		}
		a++;
	}
	ft_put3char('7', '8', '9');
}
