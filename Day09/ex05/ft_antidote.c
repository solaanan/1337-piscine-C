/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 23:26:11 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/06 23:26:19 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	int tab[3];
	int tmp;
	int a;
	int b;

	a = 0;
	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	while (a < 3)
	{
		b = a + 1;
		while (b <= 3)
		{
			if (tab[a] > tab[b])
			{
				tmp = *(tab + a);
				*(tab + a) = *(tab + b);
				*(tab + b) = tmp;
			}
			b++;
		}
		a++;
	}
	return (tab[1]);
}
