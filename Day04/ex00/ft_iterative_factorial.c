/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 22:47:03 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/09 11:03:43 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	if (nb < 0 || nb > 12)
		return (0);
	else
	{
		i = 1;
		fact = 1;
		if (nb != 0 || nb != 1)
		{
			while (i <= nb)
			{
				fact = fact * i;
				i++;
			}
		}
	}
	return (fact);
}
