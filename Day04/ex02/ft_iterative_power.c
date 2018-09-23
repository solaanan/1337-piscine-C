/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 23:51:13 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/09 11:03:59 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (power < 0)
		result = 0;
	else if (power == 0)
		result = 1;
	else
	{
		while (i <= power)
		{
			result = nb * result;
			i++;
		}
	}
	return (result);
}
