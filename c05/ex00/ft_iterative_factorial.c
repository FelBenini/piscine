/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:19:21 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/30 14:53:35 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb;
	result = nb;
	while (i > 1)
	{
		i--;
		result *= i;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(7));
}*/
