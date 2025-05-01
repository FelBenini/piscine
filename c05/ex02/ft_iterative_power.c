/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:54:08 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/30 15:02:49 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = nb;
	if (power == 0)
		return (1);
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(7, 2));
	printf("%d\n", ft_iterative_power(6, 2));
	printf("%d\n", ft_iterative_power(10, 4));
}*/
