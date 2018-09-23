/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <souhaib.laanani@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 11:34:23 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/19 11:34:24 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if (str[i])
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar('\n');
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	if (tab)
	{
		while (tab[i] != 0)
		{
			ft_putstr(tab[i]);
			i++;
		}
	}
}
