/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 23:12:29 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/12 23:14:44 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	a;
	int		b;

	i = 0;
	while (str[i] != '\0')
	{
		b = 1;
		if (i == 0)
			a = ';';
		else
			a = str[i - 1];
		if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
			b = 0;
		if (a >= '0' && a <= '9')
			b = 0;
		if (b == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ' ';
		if (b == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ' ';
		i++;
	}
	return (str);
}
