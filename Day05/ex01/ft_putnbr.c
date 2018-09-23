/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:47:51 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/10 13:47:57 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb > -10)
	{
		ft_putchar('-');
		ft_putchar(nb * -1 + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(-1 * (nb / 10));
		ft_putchar(-1 * (nb % 10) + '0');
	}
}
