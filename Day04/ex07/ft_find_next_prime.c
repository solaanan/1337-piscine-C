/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 10:46:44 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/09 11:04:46 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int j;

	i = 3;
	j = nb / 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if ((nb % 2) != 0)
	{
		while (((nb % i) != 0) && (i < j))
		{
			i = i + 2;
		}
		if ((nb % i) != 0)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	else
	{
		while (!ft_is_prime(nb))
		{
			nb++;
		}
		return (nb);
	}
}
