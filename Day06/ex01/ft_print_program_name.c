/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:51:49 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/10 20:51:51 by slaanani         ###   ########.fr       */
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
	ft_putchar('\n');
}

void	ft_print_program_name(char *str)
{
	ft_putstr(str);
}

int		main(int argc, char **argv)
{
	ft_print_program_name(argv[argc - argc]);
	return (0);
}
