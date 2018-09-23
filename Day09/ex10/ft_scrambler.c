/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:48:34 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/07 15:18:10 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	tmp1;
	int	tmp2;
	int	tmp3;

	tmp1 = *b;
	tmp2 = *******c;
	tmp3 = ****d;
	*******c = ***a;
	****d = tmp2;
	*b = tmp3;
	***a = tmp1;
}
