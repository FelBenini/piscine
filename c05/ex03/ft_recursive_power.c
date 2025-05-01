/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:49:56 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/30 17:55:16 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(7, 0));
	printf("%d\n", ft_recursive_power(6, 2));
	printf("%d\n", ft_recursive_power(10, 4));
}*/
