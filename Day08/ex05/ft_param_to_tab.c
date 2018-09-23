/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:56:11 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/20 16:56:13 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlenn(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		++i;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char				*ft_strdup(char *src)
{
	char *d;

	d = malloc(ft_strlenn(src) + 1);
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, src);
	return (d);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	int			i;
	int			cpt;

	tab = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		cpt = 0;
		while (av[i][cpt] != '\0')
			++cpt;
		tab[i].size_param = cpt;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		++i;
	}
	tab[i].str = NULL;
	return (tab);
}
