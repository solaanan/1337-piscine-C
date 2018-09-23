/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 21:05:38 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/10 21:05:40 by slaanani         ###   ########.fr       */
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

void	ft_print_params(int i, char **str)
{
	int a;

	a = 1;
	while (a < i)
	{
		ft_putstr(str[a]);
		ft_putchar('\n');
		a++;
	}
}

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
