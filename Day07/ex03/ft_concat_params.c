/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 01:21:03 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/18 01:21:05 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size(int argc, char **argv)
{
	int a;
	int b;
	int c;

	a = 1;
	c = 0;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			b++;
			c++;
		}
		c++;
		a++;
	}
	return (c);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		a;
	int		b;
	int		c;

	a = 1;
	c = 0;
	tab = (char *)malloc(sizeof(tab) * size(argc, argv));
	while (a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			tab[c] = argv[a][b];
			c++;
			b++;
		}
		if (a != argc - 1)
		{
			tab[c] = '\n';
			c++;
		}
		a++;
	}
	return (tab);
}
