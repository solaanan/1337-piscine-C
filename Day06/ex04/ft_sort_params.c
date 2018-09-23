/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 21:28:23 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/10 21:28:25 by slaanani         ###   ########.fr       */
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

void	ft_cmp(int *tb, char *s1, char *s2)
{
	tb[2] = s1[tb[0]] - s2[tb[1]];
	tb[0] += 1;
	tb[1] += 1;
}

int		ft_strcmp(char *s1, char *s2)
{
	int tb[3];

	tb[0] = 0;
	tb[1] = 0;
	while (s1[tb[0]] != '\0' || s2[tb[1]] != '\0')
	{
		if (s1[tb[0]] == s2[tb[1]])
			ft_cmp(tb, s1, s2);
		if (s1[tb[0]] != s2[tb[1]])
		{
			ft_cmp(tb, s1, s2);
			break ;
		}
	}
	return (tb[2]);
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
	char	*tmp;
	int		i;
	int		brk;

	while (1)
	{
		brk = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				brk = 1;
			}
			i++;
		}
		if (brk == 0)
			break ;
	}
	ft_print_params(argc, argv);
}
