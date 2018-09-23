/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 21:13:46 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/10 21:13:48 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char a;

	while (*str != '\0')
	{
		a = *str;
		ft_putchar(a);
		str++;
	}
}

void	ft_rev_params(int i, char **str)
{
	int a;

	a = i - 1;
	while (a > 0)
	{
		ft_putstr(str[a]);
		ft_putchar('\n');
		a--;
	}
}

int		main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
