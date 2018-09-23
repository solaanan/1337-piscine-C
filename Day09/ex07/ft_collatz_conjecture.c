/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:26:10 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/07 11:26:12 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if (base % 2 == 0)
			base = base / 2;
		else
			base = 3 * base + 1;
		return (ft_collatz_conjecture(base) + 1);
	}
	return (0);
}
