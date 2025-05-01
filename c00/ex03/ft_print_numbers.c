/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:50:37 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/20 10:55:39 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	c;

	number = 0;
	while (number <= 9)
	{
		c = number + '0';
		write(1, &c, 1);
		number++;
	}
}
