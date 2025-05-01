/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:04:16 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/20 11:16:07 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	is_first_print;

	i = 0;
	is_first_print = 1;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (!is_first_print)
				write(1, ", ", 2);
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(j / 10 + '0');
			ft_putchar(j % 10 + '0');
			is_first_print = 0;
			j++;
		}
		i++;
	}
}
